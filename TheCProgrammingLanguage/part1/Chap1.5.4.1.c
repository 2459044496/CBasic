#include <stdio.h>

// 练习1-12   以每行一个单词的形式打印其输入。
main() {

    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
        if (c == ' ' || c == '\n' || c == '\t') {
            putchar('\n');
        }
    }
}
