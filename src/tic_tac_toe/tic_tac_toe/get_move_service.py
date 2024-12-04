#!/usr/bin/env python3
import time

import rclpy
from rclpy.node import Node
from tic_tac_toe_msgs.srv import Move
import requests

import google.generativeai as genai


class GetMoveService(Node):
    def __init__(self):
        # Initialize the ROS 2 Node
        super().__init__('get_move_service')

        # Create a service to handle get_move requests
        self.srv = self.create_service(Move, 'get_move_service', self.handle_get_move)

        self.get_logger().info("Ready to get move from AI.")

        self.players = {
                'X': 0,
                'O': 1
                }
        
    def get_human_move(self, board_state, player):

        response = requests.post("http://127.0.0.1:5000/human", json={'board': str(board_state), 'your_turn': 1})

        move = requests.get("http://127.0.0.1:5000/human_move", json={})
        while move.json()["human_move"] == -1:
            time.sleep(1)
            move = requests.get("http://127.0.0.1:5000/human_move", json={})
        
        return move.json()["human_move"] + 1 

    def get_player_move(self, board_state, player):
        #response = requests.post("http://127.0.0.1:5000/player_move", json={'player': player})

        move = requests.get("http://127.0.0.1:5000/player_move", json={})
        while move.json()["player_move"] == -2:
            time.sleep(4)
            move = requests.get("http://127.0.0.1:5000/player_move", json={})

        return move.json()["player_move"]

    def get_gpt_move(self, board_state, player):
        """
        Send an api request to chatgpt
        """
        board, available = self.make_board(board_state)
        # API endpoint
        url = "https://api.openai.com/v1/chat/completions"
        api_key = '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'
        model="gpt-4"
        prompt = f"I will pass you a list of 9 characters. These are a row wise representation of a tic tac toe board delimited by a ' '. \
                You're goal is to win the tic tac toe game. You can only play in areas marked with '-'. You're response will be the 1-based index of where you wish to play. \
                You are playing {player}. You should only respond with a single number. For example if I pass in 'X - X O - - - - -' then you should respond with ONLY '2'. \
                The current game board is '{board_state}' and you can only play the following numbers {available}. What is your move, only answer with a number?"


        # Headers for the request
        headers = {
            "Authorization": f"Bearer {api_key}",
            "Content-Type": "application/json",
        }

        # Payload for the request
        data = {
            "model": model,
            "messages": [{"role": "user", "content": prompt}],
            "temperature": 0,  # Adjust for response randomness (0 = deterministic)
        }

        try:
            # Send the POST request to the API
            response = requests.post(url, headers=headers, json=data)
            response.raise_for_status()

            # Parse the JSON response
            result = response.json()

            # Extract and return the text of the response
            return result["choices"][0]["message"]["content"]

        except requests.exceptions.RequestException as e:
            return f"An error occurred: {e}"

    def get_bard_move(self, board_state, player):
        board, available = self.make_board(board_state)
        genai.configure(api_key="AIzaSyBQ0yBtAF6chhP8iwUlVE7Wbaz0BCgOlAw")
        model = genai.GenerativeModel("gemini-1.5-flash")
        response = model.generate_content(f"I will pass you a list of 9 characters. These are a row wise representation of a tic tac toe board delimited by a ' '. \
                You're goal is to win the tic tac toe game. You can only play in areas marked with '-'. You're response will be the 1-based index of where you wish to play. \
                You are playing {player}. You should only respond with a single number. For example if I pass in 'X - X O - - - - -' then you should respond with ONLY '2'. \
                The current game board is '{board_state}' and you can only play the following numbers {available}. What is your move, only answer with a number?")
        print(response.text)
        time.sleep(4)
        return response.text

    def make_board(self, board_state):
        print(board_state)
        res = ""
        available = ""
        for i in board_state[:-1]:
            res += chr(i) + ' '
        res += chr(board_state[-1])

        for idx, i in enumerate(board_state):
            print(chr(i))
            if i == ord("-"):
                available += str(idx + 1) + ' '

        self.get_logger().info(f"Available: {available}")

        return (res, available)

    def handle_get_move(self, request, response):
        """
        Callback function that handles the get_move service.
        It receives the board state and player, then requests a move from the AI.
        """
        self.get_logger().info(f"Received board state: {request.board}, Player: {request.player}")
        print(request.source)

        if request.source == 0:
            move = self.get_bard_move(request.board, request.player)
        elif request.source == 1:
            move = self.get_gpt_move(request.board, request.player)
        elif request.source == 2:
            move = self.get_player_move(request.board, request.player)
        elif request.source == 3:
            move = self.get_human_move(request.board, request.player)

        if move is None:
            self.get_logger().error("No available moves.")
            response.row = -1  # Invalid move
            response.col = -1  # Invalid move
            return response

        response.position = int(move)

        self.get_logger().info(f"Recieved move move: {move}")
        return response


def main(args=None):
    rclpy.init(args=args)

    # Create the service node
    service_node = GetMoveService()

    # Spin the node to keep it alive and handle service requests
    rclpy.spin(service_node)

    rclpy.shutdown()


if __name__ == '__main__':
    main()
