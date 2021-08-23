#include <stdio.h>

// 练习1-9    编写一个将输入复制到输出的程序，并将其中连续的多个空格用一个空格代替。
main() {

    int c;
    int pc = EOF; // prev 上一个字符

    while ((c = getchar()) != EOF) {
        // 如果上一个字符和当前字符都不是空格，输出
        if (c != ' ') {
            putchar(c);
        } else if (pc != ' ') {
            putchar(c);
        }
        // 将当前字符赋值给pc
        pc = c;
    }

}
