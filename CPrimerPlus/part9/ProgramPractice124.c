#include <stdio.h>

double min(double, double);
void chLine(char, int, int);
double harmonicMean(double, double);

int main(void) {

    // 编程练习1．设计一个函数min(x, y)，返回两个double类型值的较小值。
    // 在一个简单的驱动程序中测试该函数。
    printf("min result is:%lf\n", min(12.3, 2.3e4));

    // 编程练习2：设计一个函数chLine(ch, i, j)，打印指定的字符j行i列。
    // 在一个简单的驱动程序中测试该函数。
    chLine('c', 3, 4);

    // 编程练习4：两数的调和平均数这样计算：先得到两数的倒数，然后计算两个倒数的平均值，
    // 最后取计算结果的倒数。编写一个函数，接受两个double类型的参数，返回这两个参数的调和平均数。
    printf("harmonicMean is %lf", harmonicMean(2.3, 4.6));

    return 0;
}

double min(double d1, double d2) {
    return d1 > d2? d1 : d2;
}

void chLine(char ch, int i, int j) {
    for (int k = 1; k <= i; ++k) {
        for (int l = 1; l <= j; ++l) {
            putchar(ch);
        }
        putchar('\n');
    }
}

double harmonicMean(double d1, double d2) {
    return 1 / ((1 / d1 + 1 / d2) / 2.0);
}