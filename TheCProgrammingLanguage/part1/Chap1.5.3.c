// 第一章
// 1.5.2行计数
/**
 * ==   等于
 * ‘A’  65
 * '\n' 代表换行符的值  "\n"字符串常量
 */

#include <stdio.h>

// 字符计数
main() {

    int c;
    int nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
    }
    printf("共:%d行", nl);

}
