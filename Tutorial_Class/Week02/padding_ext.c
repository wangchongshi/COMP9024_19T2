//
// Created by Rui.Mu on 2019-06-15.
//

// padding.c
#include <stdio.h>
#include <stdlib.h>

#define SIZEBYTES 5
#define S(x)    sizeof(x)  // this is a C macro that is substituted by the preprocessor
// I use it in the program just to save line-length space
struct s1 {
    char c;
    char c1;
    int i;
    char *s;
};
struct s2 {
    char c;
    char c1;
    char *s;
    int i;
};

int main() {

    struct s1 a;
    struct s2 b;

    printf("sizeof(a.c)=%lu,sizeof(a.c1)=%lu, sizeof(a.i)=%lu, sizeof(a.s)=%lu\n", S(a.c), S(a.c1),
           S(a.i), S(a.s));
    printf("sizeof(b.c)=%lu, sizeof(b.c1)=%lu, sizeof(b.s)=%lu, sizeof(b.i)=%lu\n", S(b.c), S(b.c1),
           S(b.s), S(b.i));

    printf("sizeof(a) = %lu, sizeof(b) = %lu\n\n", sizeof(a), sizeof(b));

    a.s = malloc(SIZEBYTES); // returned value not checked
    printf("&a.c = %p\n", (void *) &a.c);
    printf("&a.c1 = %p\n", (void *) &a.c1);
    printf("&a.i = %p\n", (void *) &a.i);
    printf("&a.s = %p\n\n", (void *) &a.s);

    b.s = malloc(SIZEBYTES); // returned value not checked
    printf("&b.c = %p\n", (void *) &b.c);
    printf("&b.c1 = %p\n", (void *) &b.c1);
    printf("&b.s = %p\n", (void *) &b.s);
    printf("&b.i = %p\n", (void *) &b.i);

    return 0;
}