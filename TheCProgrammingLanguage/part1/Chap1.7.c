// 第一章
// 1.7 函数
/*
 * 函数定义的一般形式为：
 * 返回值类型 函数名（0个或多个参数声明）
 * {
 *  声明部分
 *  语句序列
 * }
 *
 * 形式参数：函数定义中圆括号内列表中出现的变量。
 * 实际参数：函数调用中与形式参数对应的值。
 *
 * return 表达式;
 * 一般来说，返回值为0表示正常终止，返回值为非0表示出现异常情况或出错结束条件。
 *
 * 出现在main函数之前的声明语句
 * int power(int m, int n);
 * 表明power函数有两个int类型的参数，并返回一个int类型的值。这种声明称为函数原型，它必须与power函数
 * 的定义和用法一致。如果函数的定义、用法和函数原型不一致，将出现错误。
 * 函数原型与函数声明中参数名不要求相同。是可选的，该函数原型也可以写成以下形式：
 * int power(int, int);
 * */
#include <stdio.h>

int power(int m, int n); // 声明语句

// 求幂函数
main() {

    int i = 0;
    for ( ; i < 10; ++i) {
        printf("%2d %4d %6d\n", i, power(2, i), power(-3, i));
    }
    return 0;
}

// power函数，求底数的n次幂，其中 n >= 0
int power(int base, int n) {
   int i = 1;
   int p = 1;

    for ( ; i <= n ; ++i) {
        p = p * base;
    }
    return p;
}
