#include <stdio.h>

// 2:输入两个正整数m和n，求其最大公约数。
int main ()
{
    int num1, num2;
    int temp;

    printf("请输入两个正整数:");
    scanf("%d%d", &num1, &num2);

    while (num2 != 0) {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }

    printf("最大公约数是：%d", num1);

    return 0;
}