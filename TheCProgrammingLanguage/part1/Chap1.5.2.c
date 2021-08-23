// 第一章
// 1.5.2字符计数
/**
 * ++自增
 * --自减
 * long整型数（长整型），至少占用32位存储单元，%ld格式
 */

#include <stdio.h>

// 字符计数
main() {

    // 版本1
    /*long nc = 0;
    while (getchar() != EOF) {
        ++nc;
    }
    printf("字符共计:%ld", nc);*/

    // 版本2 使用for循环和double
    double nc = 0;
    for (; getchar() != EOF; nc++) {
        // C语言的语法规则要求for循环语句必须有一个循环体，
        // 因此用单独的分号代替。单独的分号称为空语句。
        ;
    }
    // 这里使用%.0f强制不打印小数点和小数部分，因此小数部分的位数为0。
    printf("字符共计:%.0f", nc);

}
