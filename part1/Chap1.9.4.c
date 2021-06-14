#include <stdio.h>

#define MAXLINE 1000 // 允许输入行的最大长度

void reverse(char s[]); // 声明语句


// 练习1-19将字符串s的顺序颠倒过来
main() {
    char s[] = "Char Value";
    printf("s value:%s\n", s);
    reverse(s);
    printf("s value:%s\n", s);
    return 0;
}

// 将字符串s的顺序颠倒过来
void reverse(char s[]) {
    char temp;
    int i = 0;
    while (s[i] != '\0') {
        ++i;
    }
    --i; // 去除\0
    if (s[i] == '\n') {
        --i;
    }

    int j = 0;

    while (j < i) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        --i;
        ++j;
    }
}
