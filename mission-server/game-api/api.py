from flask import (
        Blueprint, jsonify, request, session
)

bp = Blueprint('matlab', __name__, url_prefix='/matlab')


@bp.route('/move', methods=['GET', 'POST'])
def handle_move():
    if request.method == 'GET':
        move_msg = {
                "Position": session['pos'],
                "Player": session['char'],
                "NDR": session['ndr']
                }
        session['ndr'] = False
        return jsonify(move_msg)

    if request.method == 'POST':
        msg = request.get_json()

        session['char'] = msg['char']
        session['pos'] = msg['pos']
        session['ndr_move'] = True

        response = jsonify({"Response": True})
        response.status_code = 200
        return response


@bp.route('/ready', methods=['GET', 'POST'])
def mission_result():
    if request.method == 'POST':
        result = request.get_json()

        session['ndr_ready'] = True
        print(session['ndr_ready'])

        response = jsonify(result)
        response.status_code = 200
        return response

    elif request.method == 'GET':
        msg = {
            "NDR": session.get('ndr_ready', False)
            }
        print(session['ndr_ready'])

        session['ndr_ready'] = False

        response = jsonify(msg)
        response.status_code = 200
        return response


@bp.route('/gameover', methods=['GET', 'POST'])
def game_over():
    if request.method == 'POST':
        session.clear()
        session['winner'] = request.get_json()["Winner"]
        session['gameover'] = True

        response = jsonify({"Response": True})
        response.status_code = 200
        return response

    elif request.method == 'GET':
        response = jsonify({"Response": session['gameover'],
                            "Winner": session['winner']})
        response.status_code = 200
        return response

@bp.route('player_move', methods=['GET', 'POST'])
def player_move():
    if request.method == 'POST':
        db_
