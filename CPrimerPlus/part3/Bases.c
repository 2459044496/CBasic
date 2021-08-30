#include <stdio.h>

// 以十进制显示数字，使用%d；以八进制显示数字，使用%o；以十六进制显示数字，使用%x。
// 要显示各进制数的前缀0、0x和0X，必须分别使用%#o、%#x、%#X。
int main(void) {
    int x = 100;
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

    // dec = 100; octal = 144; hex = 64
    // dec = 100; octal = 0144; hex = 0x64
    return 0;
}
