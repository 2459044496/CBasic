#include <stdio.h>
#include <stdbool.h>// C99

// 使用_Bool类型的变量
int main(void){

    bool boolValue;// stdbool.h
    true;// stdbool.h
    false;// stdbool.h

    long num;
    long sum = 0L;
    _Bool inputIsGood;

    printf("Please enter an integer to be summed");
    printf("(q to quit):");

    inputIsGood = scanf("%ld", &num) == 1;
    while (inputIsGood) {
        sum+=num;
        printf("Please enter next integer (q to quit):");
        inputIsGood = scanf("%ld", &num) == 1;
    }

    printf("Those integers sum to %ld.\n", sum);
    return 0;
}
