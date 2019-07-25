//
// Created by Rui.Mu on 2019-07-03.
//
#include <stdio.h>
#include <stdlib.h>

int euclidRecurse(int x, int y) {
    if (y == 0) {
        return x;
    } else {
        return euclidRecurse(y, x % y);
    }
}

int euclidIterate(int x, int y) {
    while (y != 0) {
        int tmp = x;
        x = y;
        y = tmp % y;
    }
    return x;
}

int main(int argc, char* argv[]) {
    if (argc == 3) {
        // two argument
        int first = atoi(argv[1]);
        int second = atoi(argv[2]);
        // result
        int result = euclidIterate(first,second);
        printf("euclid result: %d\n\n,result);
    }
}