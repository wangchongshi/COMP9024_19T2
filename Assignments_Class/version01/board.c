#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#include "board.h"

bool getInput(board *new) {
	int actSum = 0, expSum = 0, count = 0, ch, num;
	while (scanf("%d", &num) == 1) {
		new->size++;
		actSum += num;
		if (new->size != num) new->parity += num;
	}
	scanf("%c", &num);

	if (num == 'b') {
		new->size++;
		new->bPos = new->size;
	} else {
		printf("Invalid input\n");
		return false;
	}
	
	// while (scanf("%d", &num) == 1) {
	// 	new->size++;
	// 	actSum += num;
	// 	if (new->size != num) new->parity += num - new->size;
	// }

	expSum = new->size * (new->size - 1) / 2;
	if (expSum != actSum) {
		printf("Invalid numbers\n");
		return false;
	}
	return true;
}

bool valid(board *start, board *goal) {
	if (start->size != goal->size) {
		printf("start and goal must have same size\n");
		return false;
	}
	double size = sqrt(start->size);

	if (size != (int)size || size < 2) {
		printf("Invalid size\n");
		return false;
	}

	if ((int)size % 2 == 0) {
		start->parity += start->bPos / (int)size;
		goal->parity += goal->bPos / (int)size;
	}
	return true; 
}

bool canSolve(board start, board goal) {
	if (start.parity % 2 == goal.parity % 2) return true;
	return false;
}
