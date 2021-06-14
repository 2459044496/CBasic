// 第一章
// 1.6 数组

#include <stdio.h>

// 统计各个数字、空白符及其他字符出现的次数
main() {
    int c;
    int nwhite = 0; // 空白符出现次数
    int nother = 0; // 其他字符出现次数
    int ndight[10]; // 数组      dight数字
    for (int i = 0; i < 10; i++) {
        ndight[i] = 0;
    }

    char abc = '0';
    printf("avalue:%d\n", abc); // 输出为48

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            // c-'0'是一个整型表达式，如果存储在c中的字符是‘0’~‘9’，
            // 其值将为0~9
            // '0'~'9'是char 其值为48、49、50。。。，所以减去'a'48，即为0、1、2。。。
            printf("testa:%d", c);
            printf("testb:%d", c-'0');
            ++ndight[c-'0'];
        } else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        } else {
            ++nother;
        }
    }

    printf("digits ==");

    for (int j = 0; j < 10; j++) {
        printf(" %d", ndight[j]);
    }

    printf(", white space = %d, other = %d\n", nwhite, nother);

}
