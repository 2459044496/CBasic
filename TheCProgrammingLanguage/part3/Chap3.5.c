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
#include <string.h>

/*
 * 如果有空白符的话，则跳过
 * 如果有符号的话，则读取符号
 * 取整数部分，并执行转换
 * */
int atoi(char s[]);

// shellsort函数；按照递增顺序对v[0]...v[n-1]进行排序
void shellsort(int v[], int n);

// 倒置字符串s中各个字符的位置
void reverse(char s[]);

int main() {
    char s[] = {'3', '1', '+', 'a', '-'};
    printf("value: %d", atoi(s));
    int i1[] = {3, 1, 2, 6, 10};
    shellsort(i1, 5);
    reverse(s);
    for (int i = 0; i < strlen(s); ++i) {
        printf("\n %c", s[i]);
    }
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

void shellsort(int v[], int n) {
    int gap, i, j, temp;

    for (gap = n/2; gap > 0 ; gap /= 2) {
        for (i = gap; i < n; i++) {
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
        }
    }
    for (int k = 0; k < n; ++k) {
        printf("\n%d", v[k]);
    }
}

void reverse(char s[]) {
    int c, i, j;

    for (i = 0, j = strlen(s)-1 ; i < j ; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
