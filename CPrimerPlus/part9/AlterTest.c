#include <stdio.h>

void alter(int *u, int *v);

// 复习题6：设计一个名为alter()的函数，接受两个int类型的变量x和y，
// 把它们的值分别改成两个变量之和以及两变量之差。
int main(void) {

    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    alter(&x, &y);
    printf("Now x = %d and y = %d.\n", x, y);
}

void alter(int *u, int *v) {

    int sum = *u + *v;
    int sub = *u - *v;
    *u = sum;
    *v = sub;
}

/*void alter(int *u, int *v) {

    int temp;
    temp = *u + *v;
    *v = *u - *v;
    *u = temp;
}*/

/*
void alter(int *u, int *v) {

    *u = *u + *v;
    *v = *u - 2 * *v;
}*/
