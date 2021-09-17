#include <stdio.h>

// 获取用户输入并友好提示
int main(void){

    long input;
    char ch;
    printf("Please enter an integer:\n");
    while (scanf("%ld", &input) != 1) {
        while ((ch = getchar()) != '\n') {
            putchar(ch);
            printf(" is not an integer.\nPlease enter an ");
            printf("integer value,such as 25, -178, or 3: ");
        }
    }
    return 0;
}