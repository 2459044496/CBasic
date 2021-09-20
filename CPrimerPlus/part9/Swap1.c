#include <stdio.h>

void interChange(int u, int v);

// 第一个版本的交换函数
int main(void) {

    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    interChange(x, y);
    printf("Originally x = %d and y = %d.\n", x, y);
}

void interChange(int u, int v) {
    int temp;
    temp = u;
    u = v;
    v = temp;
}