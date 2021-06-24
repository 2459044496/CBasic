// 第二章
// 2.11 条件表达式

#include <stdio.h>

int main() {
    int a, b, z;
    if (a > b) {
        z = a;
    } else {
        z = b;
    }

    // 上面可以用条件表达式（使用三元运算符“？=”）。
    // expr1 ? expr2 : expr3
    // 首先计算expr1，如果其值不等于0（为真），则计算expr2的值，并以该值作为条件表达式的值，
    // 否则计算expr3的值，并以该值作为条件表达式的值。
    z = (a > b) ? a : b; // z = max(a, b)

    /*
     * 条件表达式实际上就是一种表达式，它可以用在其他表达式可以使用的任何地方。
     * 如果expr2与expr3的类型不同，结果的类型将由2.7讨论的转换规则决定。
     * 例如，如果f为float类型，n为int类型，那么表达式
     * (n > 0) ? f : n;
     * 是float类型，与n是否为正值无关。
     *
     * 条件表达式中第一个表达式两边的圆括号并不是必须的，这是因为条件运算符 ?= 的优先级
     * 非常低，仅高于赋值运算符。
     * */


}