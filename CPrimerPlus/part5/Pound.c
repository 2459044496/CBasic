#include <stdio.h>

void pound(int n);

// 定义一个带一个参数的函数
int main(void){

    int times = 5;
    char ch = '!';
    float f = 6.0;

    pound(times);// int类型的参数
    pound(ch);// 和pound((int)ch);相同
    pound(f);// 和pound((int)f);相同

    // #####
    // #################################
    // ######
    return 0;
}

void pound(int n) {
    while (n-- > 0) {
        printf("#");
    }
    printf("\n");
}
