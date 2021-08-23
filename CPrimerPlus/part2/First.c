#include <stdio.h> // 包含另一个文件

int main(void) {
    int num;// 定义一个名为num的变量
    // 变量名可以用大、小写字母、数字和下划线来命名，
    // 名称的第一个字符必须是字母或下划线，不能是数字。区分大小写。
    num = 1;// 为num赋一个值
    printf("I am a simple ");// 使用printf()函数
    printf("computer.\n");
    printf("My favorite number is %d because it is first.\n", num);
    // printf的f提醒用户，这是一种格式化打印函数。 %提醒程序，要在该处打印一个变量，d表明把变量作为十进制整数打印。

    // getchar();

    return 0;
}