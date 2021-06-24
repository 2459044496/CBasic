// 第二章
// 2.10 赋值运算符与表达式
/*
 * i = i + 2;
 * 可以写成 i += 2;
 * 大多数二元运算符（即有左、右两个操作数的运算符，比如+）都有一个相应的赋值运算符op=，
 * 其中，op可以是下面这些运算符之一：
 * +    -   *   /   %   <<  >>  &   ^   |
 * 如果expr1和expr2是表达式，那么
 * expr1 op=  expr2
 * 等价于
 * expr1 = (expr1) op (expr2)
 * 它们的区别在于，前一种形式expr1只计算一次。
 * 注意，再第二种形式中，expr2两边的圆括号是必不可少的，例如，
 * x *= y + 1
 * 的含义是
 * x = x * (y + 1)
 * 而不是
 * x = x * y + 1
 */

#include <stdio.h>

// 统计x中值为1的二进制位数
int bitcount(unsigned x);

/*
 * 在求二进制补码时，表达式x&=(x-1)可以删除x中最右边值为1的一个二进制位。
 * 例如：12&11
 *      1100
 *     &1011
 *      1000
 * 最右边的1变为0
 *      13&12
 *      1101
 *     &1100
 *      1100
 * 最右边的1变为0
 * */
int bitcount2(unsigned x);

// 用while循环实现
int bitcount3(unsigned x);

int main() {
    int x = 0b101010111;
    printf("二进制数x值为1的二进制位数为%d", bitcount(x));
    // 十进制124  二进制0111 1100
    printf("\n十进制数124值为1的二进制位数为%d", bitcount(124));

    printf("\n二进制数x值为1的二进制位数为，使用bitcount2，%d", bitcount2(x));
    printf("\n十进制数12值为1的二进制位数为，使用bitcount2，%d", bitcount2(12));

    printf("\n十进制数12值为1的二进制位数为，使用bitcount3，%d", bitcount3(12));


    printf("\n12&11，%d", 12 & 11);
    printf("\n8&7，%d", 8 & 7);
    printf("\n12&12，%d", 12 & 12);

    /*
        二进制数x值为1的二进制位数为6
        十进制数124值为1的二进制位数为5
        二进制数x值为1的二进制位数为，使用bitcount2，6
        十进制数12值为1的二进制位数为，使用bitcount2，2
        十进制数12值为1的二进制位数为，使用bitcount3，2
        12&11，8
        8&7，0
        12&12，12
     * */
    return 0;
}

// 这里将x声明为无符号类型是为了保证将x右移时，无论该程序再什么机器上运行，
// 左边空出的位都用0（而不是符号位）填补。
int bitcount(unsigned x) {
    int b;
    for (b = 0; x != 0; x >>= 1) {
        if (x & 01) {
            b++;
        }
    }
    return b;
}

int bitcount2(unsigned x) {
    int b;
    for (b = 0; x != 0 ; b++) {
        x &= (x - 1); // &后结果不为
    }
    return b;
}

int bitcount3(unsigned x) {
    int b;
    while (x != 0) {
        x &= (x - 1);
        b++;
    }
    return b;
}


