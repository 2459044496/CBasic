#include <stdio.h>

// 4:编写程序，计算并输出下面级数前n项(n＝50)的部分和。 1*2+2*3+3*4+4*5+……+n*(n+1)+…
int main ()
{
    int num = 50;
    long sum = 0;

    for (int i = 1; i <= num; ++i) {
        sum += i * (i+1);
    }

    printf("前50项的和为%ld", sum);

    return 0;
}