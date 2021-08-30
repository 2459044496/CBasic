#include <stdio.h>

int main(void) {
    // 如果把这样的字符常量赋给char类型变量grade，只有最后8位有效。因此，grade的值是'E'。
    char ch1 = 'FATE';
    printf("%c\n", ch1);// E

    char ch;
    printf("Please enter a character.\n");
    scanf("%c", &ch);// 用户输入字符
    printf("The code for %c is %d.\n", ch, ch);

    // Please enter a character.
    // C
    // The code for C is 67.
    return 0;
}