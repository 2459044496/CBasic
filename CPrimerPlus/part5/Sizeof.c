#include <stdio.h>

// ʹ��sizeof����� %zdת��˵��  %u %lu
int main(void){

    int n = 0;
    size_t intsize;
    intsize = sizeof(n);

    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n",
           n, sizeof(n), intsize);
    // n = 0, n has 4 bytes; all ints have 4 bytes.
    return 0;
}
