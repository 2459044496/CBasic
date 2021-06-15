// 第一章
// 1.10 外部变量与作用域
/*
 * 自动变量==局部变量
 *
 * 外部变量必须定义在所有函数之外，且只能定义一次，定义后编译程序将为它分配存储单元。
 * 在每个需要访问外部变量的函数中，必须声明相应的外部变量，此时说明其类型。
 * 声明时可以用extern语句显式声明，也可以通过上下文隐式声明。
 *
 * 某些情况下可以省略extern声明。在源文件中，如果外部变量的定义出现在使用它的函数之前，
 * 那么在那个函数中就没有必要使用extern声明。因此，main、getline和copy中的几个extern
 * 声明都是多余的。在通常的做法中，所有外部变量的定义都放在源文件的开始处，这样就可以
 * 省略extern声明。
 *
 * 如果程序包含在多个源文件中，而某个变量在file1文件中定义、在file2和file3文件中使用，
 * 那么在文件file2与file3中就需要使用extern声明来建立该变量与其定义之间的联系。通常
 * 把变量和函数的extern声明放在一个单独的文件中（习惯上称为头文件），并在每个源文件
 * 的开头使用#include语句把所要用的头文件包含进来。
 * 后缀名.h约定为头文件名的扩展名。例如，标准库中的函数就是在类似于<stdio.h>的头文件中声明的。
 *
 * 定义       define
 * 声明       declaration
 * "定义"表示创建变量或分配存储单元，而“声明”指的是说明变量的性质，但不分配存储单元。
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
