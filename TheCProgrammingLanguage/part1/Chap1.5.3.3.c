#include <stdio.h>

// 练习1-10    编写一个将输入复制到输出的程序，并将其中连续的制表符替换为\t，将回退符替换为\b,
// 将反斜杠替换为\\。这样可以将制表符和回退符以可见的方式显示出来。
main() {

    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar("\\t");
        } else if (c == '\b') {
            putchar("\\b");
        } else if (c == '\\') {
            putchar("\\\\");
        } else {
            putchar(c);
        }
    }

}
