#include <stdio.h>

#define SIZE 10
int sump(int *start, int *end);

// 数组元素之和
int main() {

    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;
    for (int i = 0; i < SIZE; ++i) {
        printf("marbles[%d] pointer is %p\n", i, &marbles[i]);
    }
    printf("marbles pointer is %p\n", marbles);
    printf("marbles + 10 pointer is %p\n", marbles + SIZE);

    answer = sump(marbles, marbles + SIZE);

    printf("The total number of marbles is %ld.\n", answer);

    // marbles[0] pointer is 000000000062FDF0
    // marbles[1] pointer is 000000000062FDF4
    // marbles[2] pointer is 000000000062FDF8
    // marbles[3] pointer is 000000000062FDFC
    // marbles[4] pointer is 000000000062FE00
    // marbles[5] pointer is 000000000062FE04
    // marbles[6] pointer is 000000000062FE08
    // marbles[7] pointer is 000000000062FE0C
    // marbles[8] pointer is 000000000062FE10
    // marbles[9] pointer is 000000000062FE14
    // marbles pointer is 000000000062FDF0
    // marbles + 10 pointer is 000000000062FE18
    // The total number of marbles is 190.

    return 0;
}

// 使用指针算法
int sump(int *start, int *end) {
    int total = 0;

    while (start < end) {
        total += *start;// 把数组元素值加起来
        start++;// 让指针指向下一个元素
    }

    return total;
}