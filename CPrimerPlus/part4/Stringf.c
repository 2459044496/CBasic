#include <stdio.h>

#define BLURB "Authentic imitation" // blurb 宣传语
// 字符串格式
int main(void) {

    printf("[%2s]\n", BLURB);// [Authentic imitation]
    // 转换说明是%2s，但是字段被扩大为可容纳字符串中的所有字符。

    printf("[%24s]\n", BLURB);// [     Authentic imitation]

    printf("[%24.5s]\n", BLURB);// [                   Authe]
    // .5告诉printf()只打印5个字符

    printf("[%-24.5s]\n", BLURB);// [Authe                   ]
    // -标记使得文本左对齐输出。

    // [Authentic imitation]
    // [     Authentic imitation]
    // [                   Authe]
    // [Authe                   ]
    return 0;
}