//
// Created by Rui.Mu on 2019-06-13.
//
#include <stdio.h>

struct Test1 {
    char v_char;
    int v_int;
    char *v_pointer;
};

struct Test2 {
    char v_char;
    char *v_pointer;
    int v_int;
};

int main() {

    struct Test1 test1;

    struct Test1 test2;

    printf("size of v_char is:%d,size of v_int is:%d ,size of v_pointer is:%d  ",
           sizeof(test1.v_char),sizeof(test1.v_int), sizeof(test1.v_pointer));

}
