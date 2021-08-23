#include <stdio.h>

float convert(float f); // 声明语句

// 用函数实现温度转换
main() {

    int i = 0;
    printf("摄氏温度\t\t华氏温度\n");
    for ( ; i <= 300; i+=20) {
        printf("%4d %6.1f\n", i, convert(i));
    }
    return 0;
}

float convert(float celsius) {
    float fahr = 9.0 * celsius / 5.0 + 32.0;
    return fahr;
}
