DROP TABLE IF EXISTS game_data;

CREATE TABLE game_data (
    id INTEGER PRIMARY KEY,       -- Primary key, auto-incremented integer
    board TEXT,                   -- Stores the game board state as text (e.g., a serialized string)
    pos INTEGER,                  -- Position on the board, represented as an integer
    player INTEGER,               -- The current player (e.g., 'X' or 'O')
    winner CHAR(1),               -- The winner of the game (e.g., 'X', 'O', or 'D' for draw)
    ndr BOOLEAN,                  -- A boolean value indicating if 'ndr' (No Draw Rule) is in effect
    game_over BOOLEAN,            -- A boolean value indicating if the game is over
    ready BOOLEAN,                -- A boolean value to track if reads are enabled or active
    player_move INTEGER,           -- The position the player decided to move
    opponent CHAR(2),              -- The position the player decided to move
    human_move INTEGER,              -- The position the player decided to move
    your_turn INTEGER,              -- The position the player decided to move
    players_turn BOOLEAN         -- A boolean value indicating if it is the player's turn

);


INSERT INTO game_data (board, pos, player, winner, ndr, game_over, ready, player_move, opponent, human_move, your_turn, players_turn)
VALUES ('', 0, 0, NULL, 0, 0, 0, 0, "03", -1, -1, 0);
