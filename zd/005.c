#include <stdio.h>

// 5:求出 1+2+3+4+5+...+200 的和。
int main ()
{
    int num = 200;
    long sum = 0L;

    for (int i = 1; i <= num; ++i) {
        sum+=i;
    }

    printf("和为%ld", sum);

    return 0;
}