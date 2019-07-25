#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1024

int main() {
    char line1[MAX];
    fgets(line1, MAX, stdin);
    printf("line: %s", line1);
    char *str1;
    char strii[MAX];
    str1 = strtok(line1, " \t\n");
    while (str1 != NULL) {
        strcat(strii, str1);
        printf("strii: %s, %p\n", strii, strii);
        str1 = strtok(NULL, " \t\n");
    }

    printf("strii        : %s\n", strii);


}