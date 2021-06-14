// 第一章
// 1.1入门

// 包含标准库的信息
#include <stdio.h>

// 定义为main的函数，它不接受参数值   main函数的语句都被括在花括号中
main() {
    //  main函数调用库函数printf以显示字符序列；
    // \n表示换行符
    printf("hello, world\n");

    // 下面的换行方式是错误的,printf函数永远不会自动换行
    //printf("hello, world
    //       ");

    // 可以写成以下形式
    printf("hello, ");
    printf("world");
    printf("\n");

    // \n 换行符
    printf("hello, world\n");
    // \t 制表符
    printf("hello, world\t");
    // \b 回退符
    printf("hello, world\b");
    // \" 双引号
    printf("hello, world\"");
    // \\ 反斜杠本身
    printf("hello, world\\");

    // 程序结果
  /*hello, world
    hello, world
    hello, world
    hello, world	hello, worlhello, world"hello, world\
  */

   // 练习1-2,当printf函数的参数字符串中包含\c（其中c是上面的转义字符序列中未曾列出的某个字符）时，观察一下会出现什么情况
    // \c
    printf("\nhello, world\c");
    // 程序结果
  /*
    hello, worldc
   */
}