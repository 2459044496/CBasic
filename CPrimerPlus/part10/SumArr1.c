#include <stdio.h>

#define SIZE 10
int sum(int arr[], int n);

// 数组元素之和
int main() {

    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;

    answer = sum(marbles, SIZE);

    printf("The total number of marbles is %ld.\n", answer);
    printf("The size of marbles is %zd bytes.\n", sizeof marbles);

    // The size of arr is 8 bytes.   arr并不是数组本身，它是一个指向marbles数组首元素的指针。
    // 我们的系统中用8字节存储地址，所以指针变量的大小是8字节（其他系统中地址的大小可能不是8字节）。

    // The total number of marbles is 200.
    // The size of marbles is 40 bytes.
    return 0;
}

int sum(int arr[], int n) {
    int i;
    int total = 0;

    for (int j = 0; j < n; ++j) {
        total += arr[i];
    }

    printf("The size of arr is %zd bytes.\n", sizeof arr);

    return total;
}