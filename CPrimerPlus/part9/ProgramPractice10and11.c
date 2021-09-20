#include <stdio.h>

void toBaseN(unsigned int, int);
int fibonacci(int);

int main(void) {

    // 编程练习10．为了让程序清单9.8中的to_binary()函数更通用，编写一个to_base_n()函数接受两个参数，
    // 且第二个参数在2～10范围内，然后以第2个参数中指定的进制打印第1个参数的数值。
    // 例如，to_base_n(129， 8)显示的结果为201，也就是129的八进制数。
    // 在一个完整的程序中测试该函数。
    toBaseN(100, 8);

    // 编程练习11．编写并测试Fibonacci()函数，该函数用循环代替递归计算斐波那契数。
    printf("\nFibonacci 10 is %d", fibonacci(100));


    return 0;
}

void toBaseN(unsigned int num, int base) {
    int r;
    r = num % base;
    if (num >= base) {
        toBaseN(num / base, base);
    }
    printf("%d", r);
}

// 循环实现斐波那契数列
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    int n1 = 1;
    int n2 = 1;
    int sum;
    for (int i = 3; i <= n; ++i) {
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }
    return sum;
}
