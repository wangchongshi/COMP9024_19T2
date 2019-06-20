
#
# COMP9024 Assignment 1 - Sliding-Tile Puzzle
#
#  command and parameters for the programme compile
#
# Authors:
# Rui.Mu (zxxxxxx@unsw.edu.au)
#
#
# Written: 20/06/2019
#

CC=dcc
CFLAGS=-c
all: puzzle

puzzle: boardADT.o puzzle.o

boardADT.o: boardADT.c boardADT.h
	$(CC) $(CFLAGS) boardADT.c

puzzle.o: puzzle.c boardADT.h
	$(CC) $(CFLAGS) puzzle.c

clean:
	rm -f puzzle *.o core *.gch



