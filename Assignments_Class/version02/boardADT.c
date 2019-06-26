//
// COMP9024 Assignment 1 - Sliding-Tile Puzzle
//
// implication file of board adt
//
// 1.structure for the board
// 2.operation function for the board
//
//
// Authors:
// Rui.Mu (zxxxxxx@unsw.edu.au)
//
//
// Written: 20/06/2019
//
#include "boardADT.h"

/**
 * structure board
 */
struct struct_board {
    // elements
    int *elements;
    // board length
    int length;
    // blank position
    int board_size;
};

/**
 * create new board form input of stdin
 * @param line line input
 * @return board
 */
Board create_board(char *line) {
    // malloc data
    Board board = malloc(sizeof(struct struct_board));
    // check null
    if (board != NULL) {
        // init status
        board->length = 0;
        board->board_size = 0;
        board->elements = NULL;

        // check line is null
        if (line != NULL) {
            // loop elements
            char *tmp_num_str = strtok(line, " ");
            // malloc the elements
            board->elements = malloc(SIZE * sizeof(int));

            while (tmp_num_str != NULL) {
                // check blank
                if (strcmp(tmp_num_str, "b") == 0) {
                    // set value
                    *(board->elements + board->length) = 0;
                } else {
                    // convert to the number of board
                    *(board->elements + board->length) = atoi(tmp_num_str);
                }
                // continue
                tmp_num_str = strtok(NULL, " ");
                board->length++;
            }
        }

        // set board size
        board->board_size = (int) sqrt(board->length);
    }
    // return the board
    return board;
}

/**
 * check the board whether valid
 * @param board board
 * @return
 */
bool valid_board(Board board) {

    // check null
    if (board == NULL || board->length == 0 || board->elements == NULL) {
        return false;
    }

    // check length is square of length
    if (board->board_size * board->board_size != board->length) {
        return false;
    }
    // check all the numbers exist
    for (int i = 0; i < board->length; i++) {
        bool exist = false;
        for (int j = 0; j < board->length; j++) {
            // if exists set true
            if (*(board->elements + j) == i) {
                exist = true;
                break;
            }
        }
        // if not exist return false
        if (!exist) return false;
    }
    // return true
    return true;
}

/**
 * check start board to goal boards whether solvable
 * @param start_board start board adt
 * @param end_board goal board adt
 * @return true: solvable; false: unsolvable
 */
bool check_solvable_boards(Board start_board, Board end_board) {
    // check disorder count
    if (disorder_count(start_board) % 2 == disorder_count(end_board) % 2) {
        // return true
        return true;
    }

    // return false;
    return false;
}

/**
 * get all the discount oder number elements
 * @param board board
 * @return return number
 */
int disorder_count(Board board) {
    // check size
    int disorder_count = 0;
    // check null
    if (board != NULL) {
        // loop all the elements
        for (int i = 0; i < board->length; i++) {
            // if blank
            if (*(board->elements + i) == 0) {
                if (board->board_size % 2 == 0)
                    disorder_count += i / board->board_size + 1;
            } else {
                // check all the disorder count
                for (int j = i + 1; j < board->length; j++)
                    // compute count
                    if (*(board->elements + j) != 0) {
                        disorder_count += *(board->elements + i) > *(board->elements + j);
                    }
            }
        }
    }
    // return disorder count
    return disorder_count;
}

/**
 * get size of board
 * @return board size
 */
int length(Board board) {

    // get the length of board
    if (board != NULL) {
        return board->length;
    } else {
        return 0;
    }
}

/**
 * release memories
 */
void free_board(Board board) {
    if (board != NULL) {
        // free elements
        if (board->elements != NULL) {
            // free elements
            free(board->elements);
        }

        // free board
        free(board);
    }
}