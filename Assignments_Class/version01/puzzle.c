#include <stdio.h>

#include "board.h"

int main() {
	board start = {0, 0, 0};
	board goal = {0, 0, 0};

	if (!getInput(&start)) exit(1);

	if (!getInput(&goal) || !valid(&start, &goal)) exit(1);

	if (canSolve(start, goal)) printf("solvable \n");
	else printf("unsolvable \n");
	return 0;
}
