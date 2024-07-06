#include "TicTacToe.h"

// Initialize the game board with empty squares
void initializeBoard(char board[9]) {
    for (int i = 0; i < 9; i++) {
        board[i] = ' ';
    }
}

// Print the game board
void printBoard(char board[9]) {
    printf("\n");
    printf(" %c | %c | %c \n", board[0], board[1], board[2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[3], board[4], board[5]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[6], board[7], board[8]);
    printf("\n");
}

// Check if a move is valid
bool isMoveValid(char board[9], int move) {
    return (move >= 0 && move < 9 && board[move] == ' ');
}

// Check for a win condition
bool checkWin(char board[9]) {
    int lines[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // Rows
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // Columns
        {0, 4, 8}, {2, 4, 6}             // Diagonals
    };

    for (int i = 0; i < 8; i++) {
        int a = lines[i][0];
        int b = lines[i][1];
        int c = lines[i][2];
        if (board[a] != ' ' && board[a] == board[b] && board[a] == board[c]) {
            return true;
        }
    }

    return false;
}

// Check if the game is a draw
bool checkDraw(char board[9]) {
    for (int i = 0; i < 9; i++) {
        if (board[i] == ' ') {
            return false;
        }
    }
    return true;
}
