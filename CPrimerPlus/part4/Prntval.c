#include <stdio.h>

// printf()的返回值
int main(void) {

    int bph2o = 212;
    int rv;
    rv= printf("%d F is water's boiling point.\n", bph2o);

    printf("The printf() function printed %d characters.\n", rv);

    // 212 F is water's boiling point.
    // The printf() function printed 32 characters.

    // 注意计算针对所有字符数，包括空格和不可见的换行符（\n）
    //  F is water's boiling point.\n共29个字符加上212，32个字符
    return 0;
}