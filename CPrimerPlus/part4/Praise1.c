#include <stdio.h>

#define PRAISE "You are an extraordinary being."

int main(void) {
    char name[40];

    printf("What's your name?");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name ,PRAISE);

    // What's your name?Cui Pai
    // Hello, Cui. You are an extraordinary being.

    // scanf()只读取了Cui Pai中的Cui，它在遇到第1个空白（空格、制表符或换行符）时就不再读取输入。
    // 因此，scanf()在读到Cui和Pai之间的空格时就停止了。一般而言，根据%s转换说明，
    // scanf()只会读取字符串中的一个单词，而不是一整句。
    // C语言还有其他的输入函数（如，fgets()），用于读取一般字符串。
    return 0;
}