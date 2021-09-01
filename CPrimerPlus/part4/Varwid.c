#include <stdio.h>

// 使用变宽输出字段
int main(void) {

    unsigned width, precision;// precision 精度
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width:\n");
    scanf("%d", &width);
    printf("The number is :%*d:\n", width, number);

    printf("Now enter a width and a precision:\n");
    scanf("%d %d", &weight, &precision);
    printf("Weight = %*.*f\n", width, precision, weight);

    printf("Done!\n");

    // 这里，用户首先输入6，因此6是程序使用的字段宽度。类似地，接下来用户输入8和3，
    // 说明字段宽度是8，小数点后面显示3位数字。一般而言，程序应根据weight的值来决定这些变量的值。

    // Enter a field width:
    // 6
    // The number is :   256:
    // Now enter a width and a precision:
    // 8 3
    // Weight = 242.500
    // Done!
    return 0;
}