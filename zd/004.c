#include <stdio.h>

// 4:��д���򣬼��㲢������漶��ǰn��(n��50)�Ĳ��ֺ͡� 1*2+2*3+3*4+4*5+����+n*(n+1)+��
int main ()
{
    int num = 50;
    long sum = 0;

    for (int i = 1; i <= num; ++i) {
        sum += i * (i+1);
    }

    printf("ǰ50��ĺ�Ϊ%ld", sum);

    return 0;
}