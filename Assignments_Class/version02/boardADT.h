#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct {
	int * board_vec;
	int board_len;
}Board;

Board * generate_board_by_string(char board_str[]);
int is_board_legal(Board * board);
int compute_disorder_count(Board * board);
