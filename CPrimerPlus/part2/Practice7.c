#include <stdio.h>

void smile();

// 许多研究表明，微笑益处多多。编写一个程序，生成以下格式的输出：
// 该程序要定义一个函数，该函数被调用一次打印一次“Smile!”，根据程序的需要使用该函数。
int main() {
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();

    return 0;
}

void smile() {
    printf("Smile!");
}