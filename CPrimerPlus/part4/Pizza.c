#include <stdio.h>

#define PI 3.14159

// define指令使用示例
#define BEEP '\a'
#define TEE 'T'
#define ESC '\033'
#define OOPS "Now you have done it!"

// 错误的格式
#define TOES =20

// 在比萨饼中使用已定义的常量
int main(void) {
    float area, circum, radius;// area 面积 circum环，环绕 radius 半径

    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circum = 2.0 * PI * radius;

    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);// circumference 圆周长

    // What is the radius of your pizza?
    // 3.4
    // Your basic pizza parameters are as follows:
    // circumference = 21.36, area = 36.32
    return 0;
}