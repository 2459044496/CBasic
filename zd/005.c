#include <stdio.h>

// 5:��� 1+2+3+4+5+...+200 �ĺ͡�
int main ()
{
    int num = 200;
    long sum = 0L;

    for (int i = 1; i <= num; ++i) {
        sum+=i;
    }

    printf("��Ϊ%ld", sum);

    return 0;
}