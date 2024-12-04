import rclpy
from rclpy.node import Node
from tic_tac_toe_msgs.srv import Move
import requests
import time

# Custom message for the move request
class TicTacToeNode(Node):
    def __init__(self):
        super().__init__('tic_tac_toe_node')


        # Create a service client to query for a move
        self.move_client = self.create_client(Move, 'get_move_service')
        while not self.move_client.wait_for_service(timeout_sec=1):
            self.get_logger().info("Service not yet available...")

        self.players = [0, 1]
        self.letters= ["X", "O"]
        self.start_game()

    def wait_for_ready(self):
        if not self.game_running:
            return

        time.sleep(2)

        self.get_logger().info("Waiting for the ready response")
        response = requests.get("http://127.0.0.1:5000/ready", json={"Ready": True})
        self.get_logger().info(f"Response was {response.json()}")

        if response.json()['NDR']:
            self.get_logger().info("Recieved ready")
            self.request_move()
        else:
            self.wait_for_ready()

    def send_move(self, move):
        response = requests.post("http://127.0.0.1:5000/move", json={"Position": move,
                                                                      "Player": self.turn % 2})
        self.wait_for_ready()


    def request_move(self):
        time.sleep(2)
        self.get_logger().info("Requesting move...")
        self.set_players()
        msg_board = [ord(i) for i in self.board]
        move_pos = -1
        req = Move.Request()
        req.board = msg_board
        req.player = self.turn % 2
        req.source = self.players[self.turn % 2]

        res = self.move_client.call_async(req)
        rclpy.spin_until_future_complete(self, res)
        move_pos = res.result().position

        self.handle_move(move_pos)
        self.send_move(move_pos)

    def handle_move(self, move_pos):
        """Handle a move request from a player."""
        self.get_logger().info("Got move!")
        player = self.letters[self.turn % 2]

        # Check if the move is valid
        if self.board[move_pos-1] != "-":
            self.request_move()

        # Make the move
        self.board[move_pos-1] = player

        # Check for win or draw
        if self.check_win(player):
            self.winner = player
            self.game_over = True
        elif self.check_draw():
            self.game_over = True
        else:
            self.turn += 1

        print(self.board)

        if self.game_over:
            print("Game Over")
            response = requests.post("http://127.0.0.1:5000/gameover", json={"Winner": player})

            self.start_game()
            return

    def handle_check_game_over(self, request, response):
        """Check if the game is over."""
        if self.game_over:
            if self.winner:
                response.success = True
                response.message = f"Game Over! Player {self.winner} won."
            else:
                response.success = True
                response.message = "Game Over! It's a draw."
        else:
            response.success = False
            response.message = "The game is still ongoing."
        return response

    def check_win(self, player):
        """Check if a player has won."""
        matrix = [self.board[i:i+3] for i in range(0, len(self.board), 3)]

        # Check rows
        for row in range(3):
            if all([matrix[row][col] == player for col in range(3)]):
                return True
        # Check columns
        for col in range(3):
            if all([matrix[row][col] == player for row in range(3)]):
                return True
        # Check diagonals
        if matrix[0][0] == player and matrix[1][1] == player and matrix[2][2] == player:
            return True
        if matrix[0][2] == player and matrix[1][1] == player and matrix[2][0] == player:
            return True
        return False

    def check_draw(self):
        """Check if the game is a draw."""
        matrix = [self.board[i:i+3] for i in range(0, len(self.board), 3)]
        return all(matrix[row][col] == "X" or matrix[row][col] == "O" for row in range(3) for col in range(3))

    def start_game(self):
        """Starts a new game."""        # Initialize the game state (3x3 board)
        
        # Initialize new game
        self.board = ['-' for _ in range(9)]
        self.players = ["X", "O"]
        self.turn = 0  # 0 for Player X, 1 for Player O
        self.winner = "draw"
        self.game_over = False

        self.game_running = True
        self.wait_for_ready()

    def set_players(self):
        response = requests.get("http://127.0.0.1:5000/opponent", json={})
        self.players[0] = int(response.json()["opponent"][0])
        self.players[1] = int(response.json()["opponent"][1])


def main(args=None):
    rclpy.init(args=args)

    tic_tac_toe_node = TicTacToeNode()
    
    tic_tac_toe_node.game_running = False

    tic_tac_toe_node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()

