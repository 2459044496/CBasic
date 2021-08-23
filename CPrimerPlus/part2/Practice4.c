#include <stdio.h>

void jolly();

void deny();

// 编写一个程序，生成以下输出：
// 除了main()函数以外，该程序还要调用两个自定义函数：一个名为jolly()，用于打印前3条消息，调用一次打印一条；另一个函数名为deny()，打印最后一条消息。
int main() {
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly() {
    printf("For he's a jolly good fellow!\n");
}

void deny() {
    printf("Which nobody can deny!");
}