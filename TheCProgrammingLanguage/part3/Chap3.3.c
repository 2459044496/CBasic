// 第三章
// 3.3 else-if语句
/*
 * if（表达式）
 *      语句1
 * else if（表达式）
 *      语句2
 * else if（表达式）
 *      语句3
 * else
 *      语句
 * */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int binarySearch(int value, int array[], int length);

int binarySearch2(int value, int array[], int length);


int main() {
    int array[100000];
    for (int i = 0; i < 100000; i++) {
        array[i] = i;
    }
    printf("array[3] value:%d", array[3]);

    int i = 0;
    clock_t start, finish;
    double Total_time;
    /* 测量一个事件持续的时间*/
    printf("\nTime to do %ld empty loops is ", i);
    start = clock();

    //printf("\nresult:%d", binarySearch(3, array, 100000));

    printf("\nresult:%d", binarySearch2(3, array, 100000));

    finish = clock();
    Total_time = (double)(finish - start) / CLOCKS_PER_SEC; //单位换算成秒
    printf("\n%f seconds\n", Total_time);

    return 1;
}

int binarySearch(int value, int array[], int length) {
    int low = 0;
    int high = length - 1;
    int mid;
    int count = 0;
    while (low <= high) {
        count++;
        mid = (low + high) / 2;
        if (value < array[mid]) {
            high = mid - 1;
        } else if (value > array[mid]) {
            low = mid + 1;
        } else {
            printf("\nfind count:%d", count);
            return mid;
        }
    }
    return -1;
}

int binarySearch2(int value, int array[], int length) {
    int low = 0;
    int high = length - 1;
    int mid = (low + high) / 2;
    int count = 0;
    while (low <= high && array[mid] != value) {
        count++;
        if (value < array[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
        mid = (low + high) / 2;
    }
    if (array[mid] == value) {
        printf("\nfind count:%d", count);
        return value;
    }

    return -1;
}
