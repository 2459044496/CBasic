#include <stdio.h>

// 根据用户输入的整数求和
int main(void){

    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed");
    printf("(q to quit):");// 实际上，不仅仅是q，任何非数值的数据都会导致循环终止。
    status = scanf("%ld", &num);
    // while (scanf("%ld", &num) == 1) 这种方式更简洁
    while (status == 1) {
        sum+=num;
        printf("Please enter next integer (q to quit):");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);
    return 0;
}
