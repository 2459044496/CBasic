#include <stdio.h>

long fact(int n);
long rFact(int n);

// 使用循环和递归计算阶乘
int main(void) {
    int num;
    printf("This program calculates factorials.\n");
    printf("Enter a value in the range 0-12(q to quit):\n");

    while (scanf("%d", &num) == 1) {
        if (num < 0) {
            printf("No negative numbers, please.\n");
        } else if (num > 12) {
            printf("Keep input under 13.\n");
        } else {
            printf("loop: %d factorial = %ld\n", num, fact(num));
            printf("recursion: %d factorial = %ld\n", num, rFact(num));
        }
        printf("Enter a value in the range 0-12(q to quit):\n");
    }
    printf("Bye.\n");

    return 0;
}

// 使用循环
long fact(int n) {
   long ans;
    for (ans = 1; n > 1; n--) {
        ans*=n;
    }
    return ans;
}

// 使用递归
long rFact(int n) {
    if (n == 1) {
        return 1;
    }
    return n * rFact(n - 1);
}