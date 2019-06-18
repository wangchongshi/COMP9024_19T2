//
// COMP9024 Assignment 1 - Sliding-Tile Puzzle
//
// Solvability of the NxN sliding tile puzzle
// Specification: https://webcms3.cse.unsw.edu.au/COMP9024/19T2/resources/27266
// Tutorial: https://webcms3.cse.unsw.edu.au/COMP9024/19T2/resources/27984
//
// Authors:
// Rui.Mu (zxxxxxx@unsw.edu.au)
//
//
// Written: 20/06/2019
//
#include "boardADT.h"

/**
 * main method
 * @param argc number of parameters
 * @param argv parameters
 * @return result of programme
 */
int main(int argc, char **argv) {
    // define and read the start and goal line from stdin
    char *start_line = malloc(sizeof(char) * SIZE);
    char *goal_line = malloc(sizeof(char) * SIZE);
    fgets(start_line, SIZE, stdin);
    fgets(goal_line, SIZE, stdin);
    printf("start: %s", start_line);
    printf("goal: %s", goal_line);

    // create start board and goal board
    Board start_board = create_board(start_line);
    Board end_board = create_board(goal_line);

    // check boards valid
    if (!valid_board(start_board) || !valid_board(end_board) ||
        length(start_board) != length(end_board))
        printf("#Err\n");
    else {
        // check boards solvable
        if (check_solvable_boards(start_board, end_board))
            printf("solvable\n");
        else
            printf("unsolvable\n");
    }

    // free the memories
    free_board(start_board);
    free_board(end_board);
    free(start_line);
    free(goal_line);

    // return
    return EXIT_SUCCESS;
}
/*
bad
1 2 3 1
1 2 3 b

sol
9 12 5 4 2 b 7 11 3 6 10 13 14 1 8 15
1 2 3 4 5 6 7 8 9 10 11 12 13 14 b 15

unsol
2 1 3 b
1 2 3 b
*/
