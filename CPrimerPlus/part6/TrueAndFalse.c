#include <stdio.h>

// C中真和假的值
int main(void){

    int trueValue, falseValue;

    trueValue = 10 > 2;
    falseValue = 10 == 2;

    printf("true = %d; false = %d \n", trueValue, falseValue);

    // true = 1; false = 0
    return 0;
}
