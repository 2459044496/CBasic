// 第一章
// 1.5.1文件复制
/**
 * 把输入一次一个字符地复制到输出，其基本思想如下：
 * 读一个字符
 * while(该字符不是文件结束标志符)
 *      输出刚读入的字符
 *      读下一个字符
 */

#include <stdio.h>

// 将输入复制到输出
main() {
    // 之所以不把c声明成char类型，应为它必须足够大，除了能存储任何可能出现的字符外还要能存储文件结束符EOF。
    // 因此，这里声明为int类型。
    int c;
    c = getchar();

    printf("输入信息为:");

    /*
     * EOF（end of file，文件结束）
     * EOF定义在头文件<stdio.h>中，是一个整型数。#define EOF (-1)
     * windows里的EOF，新起一行，然后ctrl+z
     * */
    // 版本1
    /*while (c != EOF) {
        putchar(c);
        c = getchar();
    }*/

    // 版本2
    while ((c = getchar()) != EOF) {
        putchar(c);
    }

}
