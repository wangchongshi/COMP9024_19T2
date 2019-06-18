#ifndef BOARD_H_
#define BOARD_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

typedef struct board{
	int size;
	int parity;
	int bPos;
} board;


bool getInput(board *new);
bool valid(board *start, board *goal);
bool canSolve(board start, board goal);

#endif