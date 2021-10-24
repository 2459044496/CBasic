#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 1:已知一个具有10个整数的一维数组，各元素值随机产生（范围在[10，99]内），求出该一维数组中的最小值。
int main ()
{
    int data[10];// 存储数组元素
    int min;// 存储最小值

    srand((unsigned)time(NULL));
    for(int i = 0; i < 10; ++i) {
        data[i] = rand() % 90 + 10;
    }

    min = data[0];

    for(int i = 0; i < 10; ++i) {
        printf("%d\n", data[i]);
    }
    for (int j = 1; j < 10; ++j) {
        if (data[j] < min) {
            min = data[j];
        }
    }
    printf("数组最小值为%d", min);

    return 0;
}