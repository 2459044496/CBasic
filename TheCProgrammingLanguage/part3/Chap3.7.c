// 第三章
// 3.7 break语句与continue语句
/*
 * break语句可用于从for、while与do-while等循环中提前退出，就如同从switch语句中提前退出一样。
 * break语句能使程序从switch语句或最内层循环中立即跳出。
 *
 * continue语句用于使for、while或do-while语句开始下一次循环的执行。
 * 在while和do-while语句中，continue语句的执行意味着立即执行测试部分；
 * 在for循环中，则意味着使控制转移到递增循环变量部分。
 * continue只用于循环语句，不用于switch语句。
 *
 * */

#define num1 5

#include <stdio.h>

int main() {
    for (int i = 0; i < num1; ++i) {
        printf("\n进入外部循环%d", i);
        for (int j = 0; j < num1; ++j) {
            if( j == 3) {
                break;
            }
            printf("进入内部循环%d\t", j);
        }
    }

    for (int i = 0; i < num1; ++i) {
        printf("\n进入外部循环%d", i);
        for (int j = 0; j < num1; ++j) {
            if( j == 3) {
                continue;
            }
            printf("进入内部循环%d\t", j);
        }
    }
    return 0;
}
