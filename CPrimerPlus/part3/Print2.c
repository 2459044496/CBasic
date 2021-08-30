#include <stdio.h>

// 更多printf()的特性
// 该例表明，使用错误的转换说明会得到意想不到的结果。
int main(void) {
    unsigned int un = 3000000000;// int为32位和short为16位的系统
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;
    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);

    // un = 3000000000 and not -1294967296
    // end = 200 and 200
    // big = 65537 and not 1
    // verybig = 12345678908642 and not 1942899938
    return 0;
}
