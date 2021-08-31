#include <stdio.h>

// sizeof是C语言的内置运算符，以字节为单位给出指定类型的大小。
// C99和C11提供%zd转换说明匹配sizeof的返回类型（即size_t类型）。
// 一些不支持C99和C11的编译器可用%u或%lu代替%zd。
int main(void) {
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
    printf("Type double has a size of %zd bytes.\n", sizeof(double));
    printf("Type long double has a size of %zd bytes.\n", sizeof(long double));
    printf("Type short has a size of %zd bytes.\n", sizeof(short));
    printf("Type float has a size of %zd bytes.\n", sizeof(float));
    // 结果与机器有关
    // Type int has a size of 4 bytes.
    // Type char has a size of 1 bytes.
    // Type long has a size of 4 bytes.
    // Type long long has a size of 8 bytes.
    // Type double has a size of 8 bytes.
    // Type long double has a size of 16 bytes.
    // Type short has a size of 2 bytes.
    // Type float has a size of 4 bytes.
    return 0;
}
	
