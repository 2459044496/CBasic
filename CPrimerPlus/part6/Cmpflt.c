#include <stdio.h>
#include <math.h>

// 浮点数比较
int main(void){

    const double ANSWER = 3.14159;
    double response;

    printf("What is the value of pi?");
    scanf("%lf", &response);

    // 循环会一直提示用户继续输入，除非用户输入的值与正确值之间相差不大于0.0001。
    while (fabs(response - ANSWER) > 0.0001) {
        printf("Try again!\n");
        scanf("%lf", &response);
    }

    printf("Close enough!\n");
    return 0;
}
