#include <stdio.h>

// 计算前20个整数和
int main(void){

    int count, sum;// 声明
    count = 0;// 表达式语句
    sum = 0;// 表达式语句

    while (count++ < 20) {// 迭代语句
        sum = sum + count;
    }
    printf("sum =%d\n", sum);

    // sum =210
    return 0;// 跳转语句
}
