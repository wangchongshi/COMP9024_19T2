//
// Created by YUJiehu on 2019-06-23.
//
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#ifndef COMP9024_19T2_QUACK_H
#define COMP9024_19T2_QUACK_H

typedef struct node* Quack;

Quack createQuack(void);

void push(int data, Quack qs);

int pop(Quack qs);

void makeEmptyQuack(Quack qs);

int isEmptyQuack(Quack qs);

void showQuack(Quack qs);

// 123456
// 654321

#endif //COMP9024_19T2_QUACK_H
