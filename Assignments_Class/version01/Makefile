CC	= gcc
CFLAGS	= -Wall -Werror -std=gnu11 -g

.PHONY: all
all:	puzzle

puzzle:	puzzle.o board.o
puzzle.o: puzzle.c board.h
board.o: board.c board.h

.PHONY: clean
clean:
	-rm -f puzzle puzzle.o
	-rm -f board board.o
