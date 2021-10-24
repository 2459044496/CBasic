#include <stdio.h>

// 8:用while语句，求连加式1 + 2 + ... + n( n > 2)的值。
int main ()
{
    int num;
    int i = 0;
    long sum = 0L;

    printf("请输入一个大于2的正整数：");
    scanf("%d", &num);

    if (num <= 2) {
        return -1;
    }

    while (i <= num) {
        sum+=i;
        i++;
    }

    printf("连加数的和为:%ld", sum);
    
    return 0;
}