// 第三章
// 3.6 do-while循环
/*
 * do
 *      语句
 * while(表达式);
 *
 * do-while循环语句至少执行一次。
 * */

#include <stdio.h>

int main() {
    int i = 2;
    do {
        printf("至少执行一次");
    } while (i > 5);
    return 0;
}
