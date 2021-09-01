#include <stdio.h>

// 跳过输入中的前两个整数
int main(void) {

    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);

    printf("The last integer was %d\n", n);

    // 上面的scanf()指示：跳过两个整数，把第3个整数拷贝给n。

    // Please enter three integers:
    // 12 13 14
    // The last integer was 14
    return 0;
}