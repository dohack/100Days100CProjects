#include "TicTacToe.h"

int main() {
    char board[9];
    int currentMove = 0;
    bool xIsNext = true;
    char winner = '\0';

    // Initialize the board
    initializeBoard(board);

    // Game loop
    while (!winner && currentMove < 9) {
        // Print current board state
        printBoard(board);

        // Determine current player
        char currentPlayer = xIsNext ? 'X' : 'O';
        
        // Get player's move
        int move;
        do {
            printf("Player %c, enter your move (0-8): ", currentPlayer);
            scanf("%d", &move);
        } while (!isMoveValid(board, move));

        // Apply the move
        board[move] = currentPlayer;

        // Check for winner
        winner = checkWin(board);

        // Switch player
        xIsNext = !xIsNext;

        // Increment move count
        currentMove++;
    }

    // Print final board state
    printBoard(board);

    // Print game result
    if (winner) {
        printf("Player %c wins!\n", winner);
    } else {
        printf("It's a draw!\n");
    }

    return 0;
}
