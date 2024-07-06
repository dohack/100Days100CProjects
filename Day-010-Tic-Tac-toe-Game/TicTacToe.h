#ifndef  TICTACTOE_H
#define  TICTACTOE_H


#include <stdio.h>
#include <stdbool.h>

// Function prototypes
void initializeBoard(char board[9]);
void printBoard(char board[9]);
bool isMoveValid(char board[9], int move);
bool checkWin(char board[9]);
bool checkDraw(char board[9]);

#endif
