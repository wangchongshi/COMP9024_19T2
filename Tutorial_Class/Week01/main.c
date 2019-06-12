//
// Created by Rui.Mu on 2019-06-09.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


//

/**
 *
 */

#define MAX 1024


struct Student {

    char *name;
    int   zid;
    char *mobile;
    struct Student *tutor;



};



int main(int argc, char **argv) {

    // malloc

    // char test[10];

    struct Student *student = malloc(sizeof(struct Student));

    student->zid = 10000;

    free(student);

    struct Student;
    typedef struct Student UniStudent;
    typedef int Vertex;


    UniStudent *uniStudent;


    Vertex source_vertex = 0;


    printf("%d\n", argc);
    printf("%s\n", argv[0]);
    printf("%s\n", argv[1]);
    printf("%s\n", argv[2]);


    // char test[10] = {'a','b','\0'};
    int n = 10;
    int money[MAX] = {1000,100,20};

    for (int i = 0;i< n;i++) {
        printf("value is %d",money[i]);
    }


            // ox00001    'a'
            // 0x00002    'b'
            // 0x00003    '\0'
            // test ========== ox00001

    // ox00000    1000
    // 0x00004    100
    // 0x00008    20
    // test ========== ox00001



    printf("test p is %p \n ",money);

    printf("test p is %d \n ",*money);


    // char 1

    printf("test p is %d \n ",*(money + 1));

    // ox00000 + 1 (int)
    // ox00004


}

// vim
// gedit
