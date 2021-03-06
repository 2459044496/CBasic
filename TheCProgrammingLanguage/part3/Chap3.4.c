// 第三章
// 3.4 switch语句
/*
 * if（表达式）
 * switch（表达式）{
 *      case    常量表达式：  语句序列
 *      case    常量表达式：  语句序列
 *      default:    语句序列
 * }
 *
 * 每一个分支都由一个或多个整数值常量表达式标记。
 *
 * */

#include <stdio.h>

int main() {
    int c, i, nwhite, nother, ndight[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; i++) {
        ndight[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        printf("\nc char:%c", c);
        switch (c) {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                ndight[c-'0']++;
                break;
            case ' ':
            case '\n':
            case '\t':
                nwhite++;
                break;
            default:
                nother++;
                break;
        }
    }
    printf("dights =");
    for (i = 0; i < 10; i++) {
        printf(" %d", ndight[i]);
    }
    printf(", white space = %d, other = %d\n", nwhite, nother);
    getchar();
    return 0;
}

