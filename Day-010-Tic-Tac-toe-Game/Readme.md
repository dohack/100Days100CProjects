### Tic-Tac-Toe Game in C

#### Overview

This project implements a basic command-line version of tic-tac-toe in C. Players take turns entering their moves until one player wins or the game ends in a draw.

#### Features

- Player input via command line.
- Board display after each move.
- Checks for winning conditions (rows, columns, diagonals).
- Detects and declares the winner or a draw.

#### Implementation Details

1. **Data Structures**

   - **Board Representation**: The game board is represented using a simple array of characters (`char board[9]`). Each element of the array corresponds to a square on the tic-tac-toe board. Empty squares are represented by `' '`, 'X' for the first player, and 'O' for the second player.

2. **Functions**

   - **initializeBoard**: Initializes the game board with empty squares (`' '`).
   - **printBoard**: Displays the current state of the board.
   - **isMoveValid**: Checks if a player's move is valid (within bounds and the square is empty).
   - **checkWin**: Checks if there is a winner by examining rows, columns, and diagonals.
   - **checkDraw**: Checks if the game has ended in a draw (all squares filled without a winner).

3. **Game Flow**

   - **Main Loop**: The game loop iterates until a player wins or the game ends in a draw.
     - Players alternate turns.
     - Each turn, the current player enters their move via command line input.
     - After each move, the board is displayed.
     - Win and draw conditions are checked after each move to determine the game's outcome.

#### Usage

To run the game:

1. Compile the `tic_tac_toe.c` file using a C compiler (e.g., GCC).
   ```bash
   gcc -o tic_tac_toe tic_tac_toe.c
   ```
2. Execute the compiled binary.
   ```bash
   ./tic_tac_toe
   ```
3. Follow the prompts to enter your moves (0-8 corresponds to the position on the board).

#### Example Output

Here's an example of how the game might look during play:

Slot numbering:

```
   |   |
 0 | 1 | 2
-----------
 3 | 4 | 5
-----------
 6 | 7 | 8
```

Initial board state:

```
   |   |
   |   |  
-----------
   |   |  
-----------
   |   |  
```

After a few moves:

```
   |   |
 X | O | X
-----------
 O | X | O
-----------
 X |   | X
```

Player X wins after placing their move:

```
   |   |
 X | O | X
-----------
 O | X | O
-----------
 X |   | X

Player X wins!
```

#### Future Enhancements

- Implementing more advanced AI for a computer player.
- Adding additional features such as saving game state or multiplayer over a network.

#### Limitations

- This implementation is basic and lacks the interactivity and visual elements of a graphical interface.
- Error handling for invalid input is minimal in this basic version.

#### Conclusion

This project provides a foundational implementation of tic-tac-toe in C, demonstrating basic game logic and player interaction through the command line. It serves as a starting point for more complex implementations or integrations into larger projects.

This tic-tac-toe implementation is part of the "[100 days 100 C program challenge](https://github.com/dohack/100Days100CProjects)", aiming to improve proficiency in C programming through daily coding projects.