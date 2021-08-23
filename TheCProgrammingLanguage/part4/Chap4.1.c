// 第四章
// 4.1 函数的基本知识
/*
 * 函数的定义形式如下：
 * 返回值类型    函数名（参数声明表）
 * {
 *      声明和语句
 * }
 *
 * 被调用函数通过return语句向调用者返回值，return语句的后面可以跟任何表达式：
 * return   表达式;
 *
 * */

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int max);

int strindex(char source[], char searchfor[]);

char pattern[] = "ould"; // 待查找的模式

int main() {
    char line[MAXLINE];
    int found = 0;

    while (getline(line, MAXLINE) > 0) {
        //printf("value:%s", line);
        if (strindex(line, pattern) >= 0) {
            printf("%s", line);
            found ++;
        }
    }
    return found;
}

// 将行保存到s中，并返回该行的长度
int getline(char s[], int lim){
    int c;
    int i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n') {
        s[i++] = c;
    }
    if (c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

// 返回t在s中的位置，若未找到则返回-1
int strindex(char s[], char t[]) {
    int i, j, k;
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i , k = 0; t[k] != '\0' && s[j] == t[k] ; j++, k++) {
            ;
        }
        if (k > 0 && t[k] == '\0') {
            return i;
        }
    }
    return -1;
}
