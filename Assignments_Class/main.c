//
// Created by Rui.Mu on 2019-06-15.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read_input1() {
    int i = 0;
    char *input;

    while (1) {
        gets(input);
        printf("string is %s ,", input);
        if (strcmp(input, "\n") == 0) {
            break;
        }
        printf("%d \n", atoi(input));

        i++;
        if (i > 31) {
            break;
        }
    }

    return 0;
}
int read_input2() {
    char *line = NULL;
    size_t len = 0;
    ssize_t read_len;
    while ((read_len = getline(&line, &len, stdin)) != -1) {
        // if (read_len > 0 && line[read_len - 1] == '\n') {
        //    line[read_len - 1] = '\0';
        //    read_len -= 1;
        // }
        printf("%s\n", line);

    }
    return 0;
}

int main(void) {
    read_input2();
    return 0;
}

// 国内一线互联网公司多年工作经历
// 多年软件开发线上线下培训经历
// 从基础抓起，课程内容翔实，准备资料充分，风格幽默风趣
// 针对不同学生因材施教，把握知识盲点，充分发掘学生潜力
// 善于启发学生，知识点从点到面，举一反三，帮助学生冲刺高分
