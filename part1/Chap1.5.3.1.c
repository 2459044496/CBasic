#include <stdio.h>

// 练习1-8    编写一个统计空格、制表符与换行符个数的程序。
main() {

    int c;
    int space = 0; // 空格
    int nt = 0; // 制表符
    int nl = 0; // 换行符

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
        if (c == '\t') {
            ++nt;
        }
        if (c == ' ') {
            ++space;
        }
    }
    printf("共:%d个空格;\n共:%d个制表符;\n共:%d行", space, nt, nl);

}
