//
// Created by Rui.Mu on 2019-07-01.
//

#include "quack.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


void compute(char item,Quack quack) {
    int first = pop(quack);
    int second = pop(quack);
    int result = 0;
    switch (item) {
        case '+':
            result = first + second;
            break;
        case '-':
            result = first - second;
            break;
        case '*':
            result = first * second;
            break;
        case '/':
            result = first / second;
            break;
        default:
            break;
    }
    // 继续压栈
    push(result,quack);
}

int main01(void) {
    char input[] = "1 2 3 + 4 5 * + 6 * +";
    // ((   ( )))

    // {"(":")"}
    // 前序，从后向前遍历，
    // 后序，从前向后遍历，
    // loop elements
    Quack quack = createQuack();
    for (int index = 0; index < strlen(input); index++) {
        char item = input[index];
        if (isdigit(item)) {
            push(item - '0', quack);
            continue;
        }
        if (item == ' ' || item == '\n') {
            continue;
        } else {
            // 执行计算
            compute(item, quack);
        }
    }
    int result = pop(quack);
    printf("result:%d", result);

    return result;

}

int main(int argc, char *argv[]) {
    // char input[] = "1 2 3 + 4 5 * + 6 *     +";
    // ((   ( )))


    char input[1024];

    fgets(input,1024,stdin);

    // {"(":")"}
    // 前序，从后向前遍历，
    // 后序，从前向后遍历，
    // loop elements
    Quack quack = createQuack();
    // loop elements
    // 采用While遍历的方式
    char *tmp_num_str = strtok(input, " \t");
    char item;

    while (tmp_num_str != NULL) {
        // check第一个字符就可以了
        item = tmp_num_str[0];
        if (isdigit(item)) {
            // 将数据压栈
            push(atoi(tmp_num_str), quack);
        } else {
            // 执行计算
            compute(item, quack);
        }
        // 继续去计算
        tmp_num_str = strtok(NULL, " ");
    }
    // 将最后的结果pop出来
    int result = pop(quack);
    printf("result:%d", result);

    return 0;

}