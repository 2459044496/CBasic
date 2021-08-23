// 第三章
// 3.8 goto语句与标号
/*
 * goto语句可以跳出多重循环。
 * 不建议使用
 * */

#define num1 5

#include <stdio.h>

int main() {
    for (int i = 0; i < num1; ++i) {
        printf("\n进入外部循环%d", i);
        for (int j = 0; j < num1; ++j) {
            if( i == 2 && j == 3) {
                goto over;
            }
            printf("进入内部循环%d\t", j);
        }
    }

    over:
        printf("\nover!!!");
    return 0;
}
