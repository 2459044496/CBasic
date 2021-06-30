// 第三章
// 3.5 while循环与for循环
/*
 * while循环语句
 * while（表达式）{
 *      语句
 * }
 * 首先求表达式的值。如果其值为真非0，则执行语句，并再次求该表达式的值。
 * 直到该表达式的值为假（0）为止，随后继续执行语句后面的部分。
 *
 * for循环语句
 * for（表达式1 : 表达式2 : 表达式3） {
 *      语句
 * }
 * 等价于以下while语句：
 * 表达式1;
 * while（表达式2） {
 *      语句
 *      表达式3;
 * }
 * 但当while或for循环语句中包含continue语句时，上述二者之间就不一定等价了。
 *
 *
 * for( ; ; ) {
 *      ...
 * }
 * 是一个“无限”循环语句，这种语句需要借助其他手段（如break语句或continue语句）才能中止运行。
 *
 *
 *
 * */

#include <ctype.h>
#include <stdio.h>

/*
 * 如果有空白符的话，则跳过
 * 如果有符号的话，则读取符号
 * 取整数部分，并执行转换
 * */
int atoi(char s[]);


int main() {
    char s[] = {'3', '1', '+', 'a', '-'};
    printf("value: %d", atoi(s));
    return 0;
    /* 输出
     * n value:3
     * n value:31
     * value:31
     * */
}

int atoi(char s[]) {
    int i, n, sign;

    for (i = 0; isspace(s[i]); i++) {// 跳过空白符
        ;
    }
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-') {// 跳过符号
        i++;
    }
    for (n = 0; isdigit(s[i]) ; i++) {
        n = 10 * n + (s[i] - '0');
        printf("n value:%d\n", n);
    }

    return sign * n;
}

