// blackbox.c: black box unit tester for a quack
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "quack.h"

int main(int argc, char *argv[]){


    char *line = "1 2 3 + 4 5 * + 6 * +";

    // loop elements
    char *tmp_num = strtok(line, " ");

    Quack quack = createQuack();

    while (tmp_num != NULL) {

        if (strcmp(tmp_num,"*") == 0 || strcmp(tmp_num,"+") == 0
        || strcmp(tmp_num,"-") == 0 || strcmp(tmp_num,"%") == 0){
            int first = pop(quack);
            int second = pop(quack);

            int result = first * second;

            push(result,quack);

        }else {
            push(atoi(tmp_num),quack);
        }

        // continue
        tmp_num = strtok(NULL, " ");
    }


    // 1 2 3 + 4 5 * + 6 * +
    // 后续遍历从前往后读
    // 前续遍历从后往前读

    // 1.遇到数字 push
    // 2。遇到运算符 pop 2次
    // 3.进行运算，

    // {}}}[[[][][][][]


    // 1.前序，后序 表达式算法    2.括号匹配算法



    // {  [   (    ]  ) ]  }
    //  "{"     :"}"
    //  "["     :"]"
    //  "("     :")"
    // push      pop
    //
    // { [                                                      (                     ]
    //  151

    // 1.数组的排序，数组的查找
    // 2.堆栈的实现
    // 3.reversed string, 后序，括号匹配算法

}

