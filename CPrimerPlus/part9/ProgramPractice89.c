#include <stdio.h>
#include <string.h>

double power(double, int);
double powerUseRecursive(double, int);

int main(void) {

    // 编程练习8．power()函数返回一个double类型数的正整数次幂。改进该函数，使其能正确计算负幂。
    // 另外，函数要处理0的任何次幂都为0，任何数的0次幂都为1（函数应报告0的0次幂未定义，
    // 因此把该值处理为1）。要使用一个循环，并在程序中测试该函数。
    for (int i = 5; i >= -5; --i) {
        printf("2.1 de %d power is %lf.\n", i, power(2.1, i));
    }

    printf("\n========================\n");

    // 编程练习9．使用递归函数重写编程练习8。
    for (int i = 5; i >= -5; --i) {
        printf("2.1 de %d power is %lf.\n", i, powerUseRecursive(2.1, i));
    }

    return 0;
}

double power(double num, int pow) {
    if (pow == 0) {
        if (num == 0) {
            printf("0^0 undefined\n");
        }
        return 1;
    }
    if (num == 0) {
        return 0;
    }

    double result = 1;

    if (pow > 0) {
        for (int i = 1; i <= pow; ++i) {
            result*= num;
        }
        return result;
    } else {
        for (; pow < 0; ++pow) {
            result*= num;
        }
        return 1 / result;
    }
}

double powerUseRecursive(double num, int pow) {
    if (pow == 0) {
        if (num == 0) {
            printf("0^0 undefined\n");
        }
        return 1;
    }
    if (num == 0) {
        return 0;
    }

    if (pow > 0) {
        return num * power(num, pow - 1);
    } else {
        return 1 / (num * power(num, pow + 1));
    }
}
