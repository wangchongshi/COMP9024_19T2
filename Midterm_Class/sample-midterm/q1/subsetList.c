// subsetList.c 
// Written by Ashesh Mahidadia, Jan 2018

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "DLList.h"
#include <stdbool.h>


/* 
    You will submit only this one file.

    Implement the function "subsetList" below. Read the exam paper for 
    detailed specification and description of your task.  

    - DO NOT modify code in the file DLList.h . 
    - You can add helper functions in this file.  
    - DO NOT add "main" function in this file. 
    
*/


int subsetList(DLList L1, DLList L2) {

    /*
       Your solution here

    */
    if (DLListIsEmpty(L2)) {
        return true;
    }

    // 分别获取数据的长度
    DLListNodeP first_1 = (DLListNodeP) L1->first;
    DLListNodeP first_2 = (DLListNodeP) L2->first;

    while (first_2 != NULL) {
        bool exists = false;
        while (first_1 != NULL) {

            if (first_1->value == first_2->value) {

                exists = true;

            }

            first_1 = first_1->next;
        }

        if (!exists) {
            return false;
        }
        // next first_2
        first_2 = first_2->next;
    }

    return true;

}



