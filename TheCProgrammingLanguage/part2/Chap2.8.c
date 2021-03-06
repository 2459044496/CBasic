// 第二章
// 2.8 自增运算符与自减运算符
/*
 * 自增运算符++使其操作数递增1，
 * 自减运算符--使其操作数递减1.
 *
 * ++在前先自增再使用变量的值
 * --在前先自减再使用变量的值
 *
 * */

#include <stdio.h>

int main() {
    int add = 0;
    int sub = 0;

    printf("++在后，结果为%d:", add++);
    printf("\n++在前，结果为%d:", ++add);

    printf("\n--在后，结果为%d:", sub--);
    printf("\n--在前，结果为%d:", --sub);

    // 输出
  /*++在后，结果为0:
    ++在前，结果为2:
    --在后，结果为0:
    --在前，结果为-2:
    */
    return 0;
}

