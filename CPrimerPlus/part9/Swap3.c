#include <stdio.h>

void interChange(int *u, int *v);

// 使用指针解决交换函数的问题
int main(void) {

    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    interChange(&x, &y);// 把地址发送给函数
    printf("Now x = %d and y = %d.\n", x, y);
}

void interChange(int *u, int *v) {
    int temp;
    temp = *u;// temp获得u所指向对象的值
    *u = *v;
    *v = temp;
}