#include <stdio.h>

// 7:使用选择法，对数组ia(1)=8,ia(2)=6,ia(3)=9,ia(4)=3,ia(5)=2,ia(6)=7。从大到小排序，并在一行上输出。
int main ()
{
    int ia[] = {8, 6, 9, 3, 2, 7};

    int iaLength = sizeof(ia) / sizeof(int);

    // 排序
    int p, t;
    for (int j = 0; j < iaLength - 1; ++j) {
        p = j;
        for (int i = j + 1; i < iaLength; ++i) {
            if(ia[p] < ia[i]) {
                p = i;// 最大元素位置
            }
        }
        // 交换位置
        if(p != j) {
            t = ia[j];
            ia[j] = ia[p];
            ia[p] = t;
        }
    }

    printf("排序后为:");
    for (int m = 0; m < iaLength; ++m) {
        printf("%d\t", ia[m]);
    }


    
    return 0;
}