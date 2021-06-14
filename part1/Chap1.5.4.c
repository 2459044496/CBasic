// 第一章
// 1.5.4单词计数

#include <stdio.h>

#define IN 1 // 在单词内
#define OUT 2 // 在单词外

// 字符计数
main() {

    int c;
    int nl = 0; // 行数
    int nw = 0; // 单词数
    int nc = 0; // 字符数
    int state = OUT; // 是否在一个单词内

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }

    printf("行数:%d\n单词数%d\n字符数%d", nl, nw, nc);

}
