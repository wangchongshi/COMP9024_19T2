//
// COMP9024 Assignment 1 - Sliding-Tile Puzzle
//
// header file of board adt
//
// 1.interfaces of board functions
//
//
// Authors:
// Rui.Mu (zxxxxxx@unsw.edu.au)
//
//
// Written: 20/06/2019
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define SIZE 1024

/**
 * new data type Board
 */
typedef struct struct_board *Board;

/**
 * create board from line input
 * @return return new board
 */
Board create_board(char*);

/**
 * check the board whether valid
 * @return true:valid; false: not valid
 */
bool valid_board(Board);

/**
 * check start board to goal boards whether solvable
 * @param start_board start board adt
 * @param goal_board goal board adt
 * @return true: solvable; false: unsolvable
 */
bool check_solvable_boards(Board start_board,Board goal_board);

/**
 * get size of board
 * @return board size
 */
int length(Board);

/**
 * get disorder count
 * @return number of disorder elements
 */
int disorder_count(Board);

/**
 * release memories
 */
void free_board(Board);
