// 第二章
// 2.2 数据类型及长度
/*
 * C语言只提供了下列几种基本数据类型:
 * char    字符型，占用一个字节，可以存放本地字符集中的一个字符
 * int     整型，通常反映了所用机器中整数大的最自然长度
 * float   单精度浮点型
 * double  双精度浮点型
 * 此外，还可以在这些基本数据类型的前面加上一些限定符。
 * short与long两个限定符用于限定整型：
 * short int sh;
 * long int counter;
 * 在上述这种类型的声明中，关键字int可以省略。通常这样做。
 *
 * short类型通常为16位，long   32位，int可以为16位或32位。
 *
 * 各编译器可以根据硬件特性自主选择合适的类型长度，但要遵循下列限制：
 * short与int类型至少为16位，而long类型至少为32位，并且short类型不得长于int类型，
 * 而int类型不得长于long类型。
 *
 * 类型限定符signed和unsigned可用于限定char类型或任何整型。
 * unsigned类型的数总是正值或0，并遵循算术模2的n次方定律，其中n是该类型占用的位数。
 * 例如，如果char对象占用8位，那么unsigned char类型变量的取值范围为0~255，
 * 而signed char类型变量的取值范围为-128~127（在采用二进制补码的机器上）。
 * 不带限定符的char类型对象是否带符号则取决于具体机器，但可打印字符总是正值。
 *
 * long double类型表示高精度的浮点数。同整型一样，浮点数的长度也取决于具体的实现，
 * float、double和long double类型可以表示相同的长度，也可以表示两种或三种不同的长度。
 *
 * 有关这些类型长度定义的符号常量以及其他与机器或编译器有关的属性可以在标准头文件
 * <limits.h>与<float.h>中找到。
 * */
#include <stdio.h>
#include <limits.h>
#include <float.h>

// 练习2-1 编写一个程序以确定分别由signed和unsigned限定的char、short、int与long类型变量的取值范围。
// 采用标准头文件中的响应值以及直接计算两种方式实现。
int main() {

    // %d整数占位符，默认有符号
    // %u整数占位符，无符号表示

    // 整数类型的位数不是固定的，与机器有关

    // char unsigned范围0~255     signed范围-128~127
    printf("signed char bit:%d\n", CHAR_BIT);
    printf("signed char max value:%d\n", SCHAR_MAX);
    printf("signed char min value:%d\n", SCHAR_MIN);
    printf("unsigned char max value:%u\n", UCHAR_MAX); // 注意 %u
    /* 输出
     * signed char bit:8
     * signed char max value:127
     * signed char min value:-128
     * unsigned char max value:255
     * */

    // short unsigned范围0~65535     signed范围-32768~32767
    printf("signed short max value:%d\n", SHRT_MAX);
    printf("signed short min value:%d\n", SHRT_MIN);
    printf("unsigned short max value:%u\n", USHRT_MAX); // 注意 %u

    /* 输出
     * signed short max value:32767
     * signed short min value:-32768
     * unsigned short max value:65535
     * */

    // int unsigned范围0~4294967295     int-2147483648~2147483648
    printf("signed int max value:%d\n", INT_MAX);
    printf("signed int min value:%d\n", INT_MIN);
    printf("unsigned int max value:%u\n", UINT_MAX); // 注意 %u
    /* 输出
     * signed int max value:2147483647
     * signed int min value:-2147483648
     * unsigned int max value:4294967295
     * */

    // long unsigned范围0~4294967295     int-2147483648~2147483647
    printf("signed long max value:%ld\n", LONG_MAX); // 注意 %ld
    printf("signed long min value:%ld\n", LONG_MIN); // 注意 %ld
    printf("unsigned long max value:%u\n", ULONG_MAX); // 注意 %u
    /* 输出
     * signed long max value:2147483647
     * signed long min value:-2147483648
     * unsigned long max value:4294967295
     * */

    printf("int 存储大小: %lu \n", sizeof(int));
    printf("long 存储大小 : %lu \n", sizeof(long ));
    // 在我的电脑输出均为4，AMD Ryzen 7 4800U with Radeon Graphics  1.80 GHz


/*              直接计算            */
    printf("\n\n\n=========================\n");
    printf("signed char min = %d\n", -(char)((unsigned char)~0>>1)-1);
    printf("signed char max = %d\n", (char)((unsigned char)~0>>1));
    printf("signed short min = %d\n", -(short)((unsigned short)~0>>1)-1);
    printf("signed short max = %d\n", (short)((unsigned short)~0>>1));
    printf("signed int min = %d\n", -(int)((unsigned int)~0>>1)-1);
    printf("signed int max = %d\n", (int)((unsigned int)~0>>1));
    printf("signed long min = %ld\n", -(long)((unsigned long)~0>>1)-1);
    printf("signed long max = %ld\n", (long)((unsigned long)~0>>1));

    printf("unsigned char max = %u\n", (unsigned char)~0);
    printf("unsigned short max = %u\n", (unsigned short)~0);
    printf("unsigned int max = %u\n", (unsigned int)~0);
    printf("unsigned long max = %lu\n", (unsigned long)~0);


    return 0;
}