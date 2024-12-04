from flask import Flask, session, jsonify, request
from flask_session import Session
import redis
from . import api
from . import db
import os

app = Flask(__name__)

app.secret_key = 'dev'

app.config['SESSION_TYPE'] = 'redis'
app.config['SESSION_PERMANENT'] = True
app.config['SESSION_COOKIE_NAME'] = "my_session"
app.config['SESSION_REDIS'] = redis.from_url('redis://127.0.0.1:6379')
app.config['DATABASE'] = os.path.join('/home/shanti/ttt_ws/mission-server/game-api', 'game-api.sqlite')
#app.register_blueprint(api.bp)

Session(app)
db.init_app(app)


@app.route('/')
@app.route('/index')
def index():
    session_data = {key: value for key, value in session.items()}
    return jsonify(session_data)

@app.route('/move', methods=['GET', 'POST'])
def handle_move():
    if request.method == 'GET':
        db_ = db.get_db()
        post = db_.execute(" \
                SELECT pos, player, ndr \
                FROM game_data \
                ").fetchone()
        db_.execute("UPDATE game_data set ndr = FALSE")
        db_.commit()

        move_msg = {
                "Position": post['pos'],
                "Player": post['player'],
                "NDR": post['ndr']
                }
        
        return jsonify(move_msg)

    if request.method == 'POST':
        msg = request.get_json()

        db_ = db.get_db()
        print(type(msg['Player']))
        db_.execute(" \
                UPDATE game_data \
                SET player = ?, pos = ?, ndr = TRUE \
                WHERE id = 1; \
                ", (msg['Player'], msg['Position']))
        db_.commit()

        response = jsonify({"Response": True})
        response.status_code = 200
        return response


@app.route('/ready', methods=['GET', 'POST'])
def mission_result():
    if request.method == 'POST':
        result = request.get_json()

        db_ = db.get_db()
        db_.execute(" \
                UPDATE game_data \
                SET ready = TRUE \
                WHERE id = 1; \
                ")
        db_.commit()

        response = jsonify(result)
        response.status_code = 200
        return response

    elif request.method == 'GET':
        db_ = db.get_db()
        post = db_.execute(" \
                SELECT ready \
                FROM game_data \
                ").fetchone()

        db_.execute("UPDATE game_data set ready = FALSE")
        db_.commit()
        msg = {
            "NDR": post['ready']
            }

        response = jsonify(msg)
        response.status_code = 200
        return response
    
@app.route('/player', methods=['GET', 'POST'])
def player():
    if request.method == 'POST':
        db_ = db.get_db()
        db_.execute(" \
                UPDATE game_data \
                SET players_turn = TRUE \
                WHERE id = 1; \
                ")
        db_.commit()

        response = jsonify({"Response": True})
        response.status_code = 200
        return response

    elif request.method == 'GET':
        db_ = db.get_db()
        game_data = db_.execute(" \
                SELECT players_turn \
                FROM game_data \
                WHERE id = 1; \
                ").fetchone()
        _ = db_.execute(" \
                       UPDATE game_data \
                       SET players_turn = FALSE \
                       WHERE id = 1;")
        db_.commit()

        response = jsonify({'players_turn': game_data['players_turn']})
        response.status_code = 200
        return response


@app.route('/player_move', methods=['GET', 'POST'])
def player_move():
    if request.method == 'POST':
        db_ = db.get_db()
        print(f"FSSFS: {request.get_json()['player_move']}")
        print(type(request.get_json()['player_move']))
        db_.execute(" \
                UPDATE game_data \
                SET player_move = ? \
                ", str(request.get_json()['player_move']))
        db_.commit()

        response = jsonify(request.get_json())
        response.status_code = 200
        return response
    elif request.method == "GET":
        db_ = db.get_db()
        res = db_.execute(" \
                SELECT player_move \
                FROM game_data \
                ").fetchone()
        db_.execute(" \
                UPDATE game_data \
                SET player_move = -2")
        db_.commit()
        response = jsonify({"player_move": res["player_move"]})
        response.status_code = 200
        return response


@app.route('/opponent', methods=['GET', 'POST'])
def opponent():
    if request.method == 'POST':
        db_ = db.get_db()
        db_.execute(" \
                UPDATE game_data \
                SET opponent = ? \
                ", [request.get_json()['opponent']])
        db_.commit()

        response = jsonify(request.get_json())
        response.status_code = 200
        return response

    elif request.method == 'GET':
        db_ = db.get_db()
        opponent = db_.execute(" \
                SELECT opponent \
                FROM game_data; \
                ").fetchone()

        response = jsonify({"opponent": opponent['opponent']})

        response.status_code = 200
        return response

@app.route('/human', methods=['GET', 'POST'])
def human():
    if request.method == 'POST':
        db_ = db.get_db()
        db_.execute(" \
                UPDATE game_data \
                SET board = ?, your_turn = ? \
                WHERE id = 1; \
                ", (request.get_json()['board'], request.get_json()['your_turn']))
        db_.commit()

        response = jsonify({"Response": True})
        response.status_code = 200
        return response

    elif request.method == 'GET':
        db_ = db.get_db()
        game_data = db_.execute(" \
                SELECT board, your_turn, player \
                FROM game_data \
                WHERE id = 1; \
                ").fetchone()
        _ = db_.execute(" \
                       UPDATE game_data \
                       SET your_turn = FALSE \
                       WHERE id = 1;")
        db_.commit()

        response = jsonify({"board": game_data['board'], "your_turn": game_data['your_turn'], 'player': game_data['player']})
        response.status_code = 200
        return response


@app.route('/human_move', methods=['GET', 'POST'])
def human_move():
    if request.method == 'POST':
        db_ = db.get_db()
        db_.execute(" \
                UPDATE game_data \
                SET human_move = ? \
                WHERE id = 1; \
                ", str(request.get_json()['human_move']))
        db_.commit()

        response = jsonify(request.get_json())
        response.status_code = 200
        return response

    elif request.method == 'GET':
        db_ = db.get_db()
        post = db_.execute(" \
                SELECT human_move \
                FROM game_data \
                ").fetchone()
        _ = db_.execute(" \
                UPDATE game_data \
                SET human_move = -1 \
                WHERE id = 1;")
        db_.commit()

        response = jsonify({"human_move": post['human_move']})
        response.status_code = 200
        return response

@app.route('/gameover', methods=['GET', 'POST'])
def game_over():
    if request.method == 'POST':
        db.init_db()
        db_ = db.get_db()
        db_.execute(" \
                UPDATE game_data \
                SET winner = ?, game_over = TRUE \
                WHERE id = 1; \
                ", (request.get_json()['Winner']))
        db_.commit()

        response = jsonify({"Response": True})
        response.status_code = 200
        return response

    elif request.method == 'GET':
        db_ = db.get_db()
        post = db_.execute(" \
                SELECT game_over, winner \
                FROM game_data \
                ").fetchone()
        response = jsonify({"Response": post['game_over'],
                            "Winner": post['winner']})
        response.status_code = 200
        return response
