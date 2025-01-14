//
// Created by Rui.Mu on 2019-06-23.
//
// quack.c: an array-based implementation of a quack
#include "quack.h"

#define HEIGHT 1000

// list = []
// list.append()
// list.pop()

struct node {
    int array[HEIGHT];
    int top;    // used by both pop and push
};


// quack
// queue,stack
// linked list
// graph tree

Quack createQuack(void) {
    Quack qs;
    qs = malloc(sizeof(struct node));
    if (qs == NULL) {
        fprintf (stderr, "createQuack: no memory, aborting\n");
        exit(1); // should pass control back to the caller
    }
    qs->top = -1;
    return qs;
}

void push(int data, Quack qs) {
    if (qs == NULL) {
        fprintf(stderr, "push: quack not initialised\n");
    }
    else {
        if (qs->top >= HEIGHT-1) {
            fprintf(stderr, "push: quack overflow\n");
        }
        else {
            ++qs->top;
            qs->array[qs->top] = data;
        }
    }
    return;
}

// 1 2, -----n
// 1,2,3 --- n
// n,         1
// push 2 qs->top 0
// 2    qs->top->-1

int pop(Quack qs) { // return top element, or 0 if error
    int retval = 0;
    if (qs == NULL) {
        fprintf(stderr, "pop: quack not initialised\n");
    }
    else {
        if (isEmptyQuack(qs)) {
            fprintf(stderr, "pop: quack underflow\n");
        }
        else {
            retval = qs->array[qs->top]; // top element on stack
            --qs->top;
        }
    }
    return retval;
}

void makeEmptyQuack(Quack qs) {
    if (qs == NULL) {
        fprintf(stderr, "makeEmptyQuack: quack not initialised\n");
    }
    else {
        while (!isEmptyQuack(qs)) {
            pop(qs);
        }
    }
    return;
}

int isEmptyQuack(Quack qs) {
    int empty = 0;
    if (qs == NULL) {
        fprintf(stderr, "isEmptyQuack: quack not initialised\n");
    }
    else {
        empty = qs->top < 0;
    }
    return empty;
}

void showQuack(Quack qs) {
    if (qs == NULL) {
        fprintf(stderr, "showQuack: quack not initialised\n");
    }
    else {
        printf("Quack: ");
        if (qs->top < 0) {
            printf("<< >>\n");
        }
        else {
            int i;
            printf("<<");                    // start with a <<
            for (i = qs->top; i > 0; --i) {
                printf("%d, ", qs->array[i]); // print each element
            }
            printf("%d>>\n", qs->array[0]);   // last element includes a >>
        }
    }
    return;
}
