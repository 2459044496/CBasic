#include <stdio.h>

#define SIZE 4

// 测试数组初始化
int main() {

    int arr1[SIZE] = {0, 1, 2, 3};
    for (int i = 0; i < SIZE; ++i) {
        printf("arr1[%d] is %2d\n", i, arr1[i]);
    }

    printf("\n==================\n\n");

    int arr2[SIZE] = {1};
    for (int i = 0; i < SIZE; ++i) {
        printf("arr2[%d] is %2d\n", i, arr2[i]);
    }

    printf("\n==================\n\n");

    const int arr3[] = {4, 3, 6, 9, 22};
    for (int i = 0; i < sizeof arr3 / sizeof arr3[0]; ++i) {
        printf("arr3[%d] is %2d\n", i, arr3[i]);
    }

    printf("\n==================\n\n");

    // C99 指定初始化器
    int arr4[SIZE] = {[2]= 18};
    for (int i = 0; i < SIZE; ++i) {
        printf("arr4[%d] is %2d\n", i, arr4[i]);
    }

    printf("\n==================\n\n");

    int arr5[] = {[6]= 18, 19, 20};
    for (int i = 0; i < sizeof arr5 / sizeof arr5[0]; ++i) {
        printf("arr5[%d] is %2d\n", i, arr5[i]);
    }

    printf("\n==================\n\n");

    /*int n = 5;
    int m = 8;
    float a1[5];
    float a2[5 * 2 + 1];
    float a3[sizeof(int) + 1];
    float a4[-4];// 不可以，数组大小必须大于0
    float a5[0];// 不可以，数组大小必须大于0
    float a6[2.5];// 不可以，数组大小必须大于0
    float a7[(int)2.5];
    float a8[n];// C99之前不允许
    float a9[m];// C99之前不允许*/

    return 0;
}