//
// Created by Rui.Mu on 2019-06-15.
//

// padding.c
#include <stdio.h>
#include <stdlib.h>

#define SIZEBYTES 5
#define S(x)    sizeof(x)  // this is a C macro that is substituted by the preprocessor
// I use it in the program just to save line-length space
// char c
struct s1 {
    // 0x00000000
    // padding
    char  c; // 1->4 1bytes
    int   i; // 4 bytes
    char *s; // 8 bytes
    struct s1 *next;
};
struct s2 {
    char  c; // 1  1->8 bytes
    char *s; // 8  8
    int   i; // 4  4->8
    struct s2 *next;
    int *p;
};

struct s3 {
    char  c;  // 1
    char  c1; // 1 1->3
    int   i;  // 4
    char *s;  // 8
};

int main() {

    struct s1 a;
    &a.c;
    struct s1 *aa;
    aa->c

    struct s2 b;

    printf("sizeof(a.c)=%lu, sizeof(a.i)=%lu, sizeof(a.s)=%lu\n", S(a.c), S(a.i), S(a.s));
    printf("sizeof(b.c)=%lu, sizeof(b.s)=%lu, sizeof(b.i)=%lu\n", S(b.c), S(b.s), S(b.i));

    printf("sizeof(a) = %lu, sizeof(b) = %lu\n\n", sizeof(a), sizeof(b));

    a.s = malloc(SIZEBYTES); // returned value not checked
    printf("&a.c = %p\n", (void*)&a.c);
    printf("&a.i = %p\n", (void*)&a.i);
    printf("&a.s = %p\n\n", (void*)&a.s);

    b.s = malloc(SIZEBYTES); // returned value not checked
    printf("&b.c = %p\n", (void*)&b.c);
    printf("&b.s = %p\n", (void*)&b.s);
    printf("&b.i = %p\n", (void*)&b.i);

    return 0;
}