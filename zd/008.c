#include <stdio.h>

// 8:��while��䣬������ʽ1 + 2 + ... + n( n > 2)��ֵ��
int main ()
{
    int num;
    int i = 0;
    long sum = 0L;

    printf("������һ������2����������");
    scanf("%d", &num);

    if (num <= 2) {
        return -1;
    }

    while (i <= num) {
        sum+=i;
        i++;
    }

    printf("�������ĺ�Ϊ:%ld", sum);
    
    return 0;
}