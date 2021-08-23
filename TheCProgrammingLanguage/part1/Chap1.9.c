// 第一章
// 1.9 字符数组
/*
 * getline函数把字符'\0'（即空字符，其值为0）插入到它创建的数组的末尾，以标记字符串的结束。
 * 这一约定已被C语言采用：当在C语言中出现类似于
 * "hello\n"
 * 的字符串常量时，它将以字符数组的形式存储，数组的各元素分别存储在各个字符，并以'\0'标记字符串的结束。
 * h    e   l   l   o   \n  \0
 * printf函数中的格式说明%s规定，对应的参数必须是以这种形式表示的字符串。
 * copy函数的实现正是依赖于输入参数由'\0'结束这一事实，它将'\0'拷贝到输出参数中。
 * */
#include <stdio.h>

#define MAXLINE 1000 // 允许输入行的最大长度

int getline(char line[], int maxline); // 声明语句
void copy(char to[], char from[]);


// 打印最长输出行
main() {

    int len; // 当前行长度
    int max = 0; // 目前为止发现的最长行的长度
    char line[MAXLINE]; // 当前的输入行
    char longest[MAXLINE]; // 用于保存最长的行

    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) { // 存在这样的行
        printf("%s", longest);
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

// copy函数：将form复制到to；这里假定to足够大
void copy(char to[], char from[]) {
    int i = 0;

    while ((to[i] = from[i]) != '\0') {
        ++i;
    }

}
