#include <stdio.h>
#include <float.h>

int main(void) {

    // 编程练习7．编写一个程序，将一个double类型的变量设置为1.0/3.0，
    // 一个float类型的变量设置为1.0/3.0。分别显示两次计算的结果各3次：
    // 一次显示小数点后面6位数字；一次显示小数点后面12位数字；一次显示小数点后面16位数字。
    // 程序中要包含float.h头文件，并显示FLT_DIG和DBL_DIG的值。1.0/3.0的值与这些值一致吗？
    float float1 = 1.0 / 3.0;
    printf("float1 is %.6f\t%.12f\t%.16f", float1, float1, float1);
    printf("\nFLT_DIG is %d", FLT_DIG);
    printf("\nDBL_DIG is %d", DBL_DIG);

    // float1 is 0.333333      0.333333343267  0.3333333432674408
    // FLT_DIG is 6
    // DBL_DIG is 15

    return 0;
}