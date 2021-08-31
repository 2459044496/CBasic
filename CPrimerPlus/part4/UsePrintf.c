#include <stdio.h>

// 转换说明示例
int main(void) {
    float float1 = 3.1415929;
    // %a/%A 浮点数、十六进制数和p计数法
    // %f 浮点数，十进制计数法
    // %e/%E 浮点数，e计数法
    // %g/%G 根据值的不同，自动选择%f或%e。%e格式用于指数小于-4或者大于等于精度时
    printf("%a\t%A\t%f\t%e\t%E\t%g\t%G", float1, float1, float1, float1, float1, float1);
    // 0x1.921fb8p+1   0X1.921FB8P+1   3.141593        3.141593e+000   3.141593E+000   3.14159 2.07694E-317

    char char1 = 'C';
    int int1 = 88;
    // %c 单个字符
    printf("\nchar1 value is:%c,int1 show char:%c", char1, int1);
    // char1 value is:C,int1 show char:X

    int int2 = 100;
    // %d/%i 有符号十进制整数
    // %o 无符号八进制整数
    // %u 无符号十进制整数
    // %x/%X 无符号十六进制整数，使用十六进制数0f/F
    // %#o %#x %#X 打印出前缀0 0x 0X
    printf("\n%d\t%i\t%o\t%u\t%x\t%X", int2, int2, int2, int2, int2, int2);
    printf("\n%d\t%i\t%#o\t%u\t%#x\t%#X", int2, int2, int2, int2, int2, int2);
    // 100     100     144     100     64      64
    // 100     100     0144    100     0x64    0X64

    char name[] = "CuiPai";
    // %s 字符串
    printf("\nname is %s", name);
    // name is CuiPai

    // %p 指针
    printf("\nname pointer is%p", name);
    // name pointer is000000000062FE00

    // %% 打印一个百分号
    printf("\n%%");
    return 0;
}