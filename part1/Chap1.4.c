// 第一章
// 1.4符号常量  #define指令行的末尾没有分号
// 定义  #define  名字  替换文本

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

// 使用符号常量
main() {
    int fahr; // 华氏温度

    printf("华氏温度\t摄氏温度\n");
    for (fahr = LOWER; fahr <= UPPER; fahr=fahr+STEP) {
        printf("%4d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
    }

}