// 第一章
// 1.10 外部变量与作用域
/*
 * 自动变量==局部变量
 *
 * 外部变量必须定义在所有函数之外，且只能定义一次，定义后编译程序将为它分配存储单元。
 * 在每个需要访问外部变量的函数中，必须声明相应的外部变量，此时说明其类型。
 * 声明时可以用extern语句显式声明，也可以通过上下文隐式声明。
 *
 * extern   外部，外部变量
 *
 * */
#include <stdio.h>

#define MAXLINE 1000 // 允许输入行的最大长度

int max; // 目前为止发现的最长行的长度
char line[MAXLINE]; // 当前的输入行
char longest[MAXLINE]; // 用于保存最长的行

/*
 * 为了与老版本的C语言程序兼容，ANSIC语言把空参数表看成老版本C语言的声明方式，并且对参数表不再进行任何检查。
 * 在ANSI C中，如果要声明空参数表，则必须使用关键字void进行显式声明。
 * */
int getline(void); // 声明语句
void copy(void);


// 打印最长输出行；特别版本
main() {

    int len; // 当前行长度
    extern int max;
    extern char longest[];

    max = 0;

    while ((len = getline()) > 0) {
        if (len > max) {
            max = len;
            copy();
        }
    }

    if (max > 0) { // 存在这样的行
        printf("%s", longest);
    }

    return 0;
}

// getline函数：将一行读入s中并返回其长度；特别版本
int getline(void) {
    int c;
    int i;

    extern char line[];

    for (i = 0; i <MAXLINE-1 && (c=getchar()) != EOF && c != '\n' ; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

// copy函数：将form复制到to；这里假定to足够大；特别版本
void copy(void) {
    int i;

    extern char line[];
    extern char longest[];

    i = 0;

    while ((longest[i] = line[i]) != '\0') {
        ++i;
    }

}
