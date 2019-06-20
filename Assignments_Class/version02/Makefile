# command and parameters for the programme compile
CC=dcc
CFLAGS=-O3

all: board.o puzzle.o

board.o: boardADT.c boardADT.h
    $(CC) $(CFLAGS) -o board.o boardADT.c

puzzle.o: puzzle.c boardADT.h
    $(CC) $(CFLAGS) -o puzzle.o puzzle.c

clean:
     rm -f puzzle *.o core *.gch



