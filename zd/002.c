#include <stdio.h>

// 2:��������������m��n���������Լ����
int main ()
{
    int num1, num2;
    int temp;

    printf("����������������:");
    scanf("%d%d", &num1, &num2);

    while (num2 != 0) {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }

    printf("���Լ���ǣ�%d", num1);

    return 0;
}