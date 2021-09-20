#include <stdio.h>

void interChange(int u, int v);

// 查找swap1.c的问题
int main(void) {

    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    interChange(x, y);
    printf("Now x = %d and y = %d.\n", x, y);
}

void interChange(int u, int v) {
    int temp;
    printf("Originally u = %d and v = %d.\n", u, v);
    temp = u;
    u = v;
    v = temp;
    printf("Now u = %d and v = %d.\n", u, v);
}