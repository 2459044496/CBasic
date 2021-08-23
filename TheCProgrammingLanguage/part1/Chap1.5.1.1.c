#include <stdio.h>

// 练习1-6验证表达式getChar()!=EOF的值是0还是1。
// 练习1-7打印EOF的值
main() {
    int c;
    c = (getchar() != EOF);
    printf("\ngetchar() != EOF的值:%d", c);

    int eofValue = EOF;
    printf("\nEOF的值为:%d", eofValue);

    // 程序输出
  /*getchar() != EOF的值:1
    EOF的值为:-1
  */

}
