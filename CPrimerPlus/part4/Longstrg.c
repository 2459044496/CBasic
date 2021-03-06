#include <stdio.h>

// 打印较长的字符串
int main(void) {
    // 给字符串断行有3种方法

    printf("Here's one way to print a ");
    printf("long string.\n");// Here's one way to print a long string.
    // 方法1：使用多个printf()语句。因为第1个字符串没有以\n字符结束，所以第2个字符串紧跟第1个字符串末尾输出。

    printf("Here's another way to print a \
long string.\n");// Here's another way to print a long string.
    printf("Here's another way to print a \
    long string.\n");// Here's another way to print a     long string.
    // 方法2：用反斜杠（\）和Enter（或Return）键组合来断行。这使得光标移至下一行，而且字符串中不会包含换行符。其效果是在下一行继续输出。
    // 但是，下一行代码必须和程序清单中的代码一样从最左边开始。如果缩进该行，比如缩进5个空格，那么这5个空格就会成为字符串的一部分。

    printf("Here's the newest way to print a"
           "long string.\n");// Here's the newest way to print along string.
    // 方法3：ANSI C引入的字符串连接。在两个用双引号括起来的字符串之间用空白隔开，C编译器会把多个字符串看作是一个字符串。


    // Here's one way to print a long string.
    // Here's another way to print a long string.
    // Here's another way to print a     long string.
    // Here's the newest way to print along string.
    return 0;
}