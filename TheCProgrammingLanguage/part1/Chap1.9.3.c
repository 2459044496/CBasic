#include <stdio.h>

#define MAXLINE 1000 // 允许输入行的最大长度

int getline(char line[], int maxline); // 声明语句


// 练习1-18删除每个输入行末尾的空格及制表符，并删除完全是空格的行。
main() {

    int len; // 当前行长度
    char line[MAXLINE]; // 当前的输入行

    while ((len = getline(line, MAXLINE)) > 0) {
        printf("%s\n", line);
    }

    return 0;
}

// getline函数：将一行读入s中并返回其长度，并删除每个输入行末尾的空格及制表符，删除完全是空格的行
int getline(char s[], int lim) {
    int c;
    int i;
    int k;

    for (i = 0; i <lim-1 && (c=getchar()) != EOF && c != '\n' ; ++i) {
        s[i] = c;
    }
    for (k = i-1; s[k] == ' ' || s[k] == '\t' ; k--) {
        s[k] = '\0';
    }

    return k;
}
