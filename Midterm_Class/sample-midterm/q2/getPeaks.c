// getPeaks.c 
// Written by Ashesh Mahidadia, December 2017

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "DLList.h"


/* 
    You will submit only this one file.

    Implement the function "getPeaks" below. Read the exam paper for 
    detailed specification and description of your task.  

    - DO NOT modify code in the file DLList.h . 
    - You can add helper functions in this file.  
    - DO NOT add "main" function in this file. 
    
*/

DLList getPeaks(DLList L) {

    DLList peaksL = newDLList();

    // your solution here ...
    if (DLListLength(peaksL) > 2) {

        DLListNodeP first = L->first;
        DLListNodeP second = first->next;
        DLListNodeP third = second->next;
        while (third != NULL) {
            if (first->value < second->value && second->value > third->value) {
                DLListNodeP new_node = newDLListNode(second->value);
                if (peaksL->first == NULL) {
                    peaksL->first = peaksL->last = new_node;
                    peaksL->nitems++;
                } else {
                    peaksL->last->next = new_node;
                    peaksL->last = new_node;
                    peaksL->nitems++;
                }

            }
        }
    }

    return peaksL;

}



