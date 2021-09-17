#include <stdio.h>

// 重复输入
int main(void){

    char ch;

    while ((ch = getchar()) != '#') {
        putchar(ch);
    }

    // Haha123[enter]//输入
    // Haha123//输出
    // hello # cui//输入
    // hello//输出

    return 0;
}
