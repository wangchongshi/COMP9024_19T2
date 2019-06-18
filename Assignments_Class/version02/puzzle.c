#include "boardADT.h"


int main(int argc, char ** argv) {
	char start_str[1024] = {'\0'};
	char goal_str[1024] = {'\0'};
	gets(start_str);
	gets(goal_str);
	printf("start: %s\n", start_str);
	printf("goal: %s\n", goal_str);
	Board * start = generate_board_by_string(start_str);
	Board * goal = generate_board_by_string(goal_str);
	if (is_board_legal(start) == 0 || is_board_legal(goal) == 0 || start->board_len != goal->board_len)
		printf("#Err\n");
	else {
		if (compute_disorder_count(start) % 2 == compute_disorder_count(goal) % 2)
			printf("solvable\n");
		else
			printf("unsolvable\n");
	}
	return 0;
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
