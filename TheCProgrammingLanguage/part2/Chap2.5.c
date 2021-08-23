// 第二章
// 2.5 算术运算符
/*
 * 二元算术运算符包括：+、-、*、/、%（取模运算符）。
 * 整数除法会截断结果中的小数部分。
 * 表达式 x % y，的结果是x除以y的余数，当x能被y整除时，其值为0.
 *
 * 取模运算符 % 不能应用于float或double类型。
 * 在有负操作数的情况下，整数除法截取的方向以及取模运算结果的符号取决于具体机器的实现，
 * 这和处理上溢或下溢的情况是一样的。
 *
 * 二元运算符+和-具有相同的优先级，它们的优先级比运算符*、/和%的优先级低，
 * 而运算符*、/和%的优先级又比一元运算符+和-的优先级低。
 * 算术运算符采用从左到右的结合规则。
 * */

#include <stdio.h>

int isLear(int a);

int main() {

    int year = 23;
    if ((year %  4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }
    printf("%d result", isLear(24));

    return 0;
}

int isLear(int year) {
    if ((year %  4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year\n", year);
        return 0;
    } else {
        printf("%d is not a leap year\n", year);
        return 1;
    }
}
