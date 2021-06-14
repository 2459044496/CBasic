#include <stdio.h>

#define MAXLINE 1000 // 允许输入行的最大长度

int getline(char line[], int maxline); // 声明语句


// 练习1-16打印任意长度的输入行的长度
main() {

    int len; // 当前行长度
    char line[MAXLINE]; // 当前的输入行

    while ((len = getline(line, MAXLINE)) > 0) {
        printf("%s\n", line);
    }

    return 0;
}

// getline函数：将一行读入s中并返回其长度
int getline(char s[], int lim) {
    int c;
    int i;

    for (i = 0; i <lim-1 && (c=getchar()) != EOF && c != '\n' ; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

