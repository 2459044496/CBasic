#include <stdio.h>

#define SIZE 10
int sum(int arr[], int n);

// ����Ԫ��֮��
int main() {

    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;

    answer = sum(marbles, SIZE);

    printf("The total number of marbles is %ld.\n", answer);
    printf("The size of marbles is %zd bytes.\n", sizeof marbles);

    // The size of arr is 8 bytes.   arr���������鱾������һ��ָ��marbles������Ԫ�ص�ָ�롣
    // ���ǵ�ϵͳ����8�ֽڴ洢��ַ������ָ������Ĵ�С��8�ֽڣ�����ϵͳ�е�ַ�Ĵ�С���ܲ���8�ֽڣ���

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