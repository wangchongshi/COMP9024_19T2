#include "boardADT.h"

/*
typedef struct {
	int * board_vec;
	int board_len;
}Board;
*/

Board *generate_board_by_string(char board_str[]) {
    Board *board = (Board *) malloc(sizeof(Board));
    board->board_len = 0;
    board->board_vec = NULL;
    char *tmp_num_str = strtok(board_str, " ");
    while (tmp_num_str != NULL) {
        board->board_len++;
        board->board_vec = (int *) realloc(board->board_vec, sizeof(int) * (board->board_len));
        int tmp_num;
        if (strcmp(tmp_num_str, "b") == 0) tmp_num = 0;
        else tmp_num = atoi(tmp_num_str);
        board->board_vec[board->board_len - 1] = tmp_num;
        tmp_num_str = strtok(NULL, " ");
    }
    return board;
}

int is_board_legal(Board *board) {
    int board_size = sqrt(board->board_len);
    if (board_size * board_size != board->board_len) return 0;
    for (int i = 0; i < board->board_len; i++) {
        int is_found = 0;
        for (int j = 0; j < board->board_len; j++)
            if (board->board_vec[j] == i) is_found = 1;
        if (is_found == 0) return 0;
    }
    return 1;
}

int compute_disorder_count(Board *board) {
    int board_size = sqrt(board->board_len);
    int disorder_count = 0;
    for (int i = 0; i < board->board_len; i++) {
        if (board->board_vec[i] == 0) {
            if (board_size % 2 == 0)
                disorder_count += i / board_size + 1;
        } else {
            for (int j = i + 1; j < board->board_len; j++)
                if (board->board_vec[j] != 0)
                    disorder_count += board->board_vec[i] > board->board_vec[j];
        }
    }
    return disorder_count;
}