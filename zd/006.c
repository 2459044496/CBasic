#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 6:利用随机函数产生20个10～99之间（包括10和99）的随机整数存入一维数组A，统计在范围30～70之间（包括30和70）的个数。
int main ()
{
    int A[100];
    int num = 20;
    int count = 0;

    srand((unsigned)time(NULL));
    for (int i = 0; i < num; ++i) {
        A[i] = rand() % 90 + 10;
        if (A[i] >=30 && A[i] <= 70) {
            count++;
        }
    }

    printf("范围30～70之间的个数为:%d", count);
    
    return 0;
}