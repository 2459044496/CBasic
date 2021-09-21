#include <stdio.h>

#define MONTHS 12

// use pointer notation // notation 标记法；记号；表示法；符号
int main() {

    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < MONTHS; index++) {
        printf("Month %2d has %2d days.\n", index + 1,
               *(days + index)// 与days[index]相同
               );
    }

    return 0;
}