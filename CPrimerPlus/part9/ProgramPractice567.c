#include <stdio.h>
#include <string.h>
#include <ctype.h>

void largerOf(double *, double *);
void changeParam(double *, double *, double *);
int check(void);
int location(char);

int main(void) {

    // 编程练习5．编写并测试一个函数larger_of()，该函数把两个double类型变量的值替换为较大的值。
    // 例如，largerOf(x, y)会把x和y中较大的值重新赋给两个变量。
    double d1 = 12.3;
    double d2 = 4334.12;
    printf("before d1 is:%lf, d2 is %lf.\n", d1, d2);
    largerOf(&d1, &d2);
    printf("after d1 is:%lf, d2 is %lf.\n", d1, d2);

    // 编程练习6．编写并测试一个函数，该函数以3个double变量的地址作为参数，把最小值放入第1个变量，
    // 中间值放入第2个变量，最大值放入第3个变量。
    double pra1 = 101.235;
    double pra2 = 12.0;
    double pra3 = 66;
    printf("before pra1 is:%lf, pra2 is %lf pra3 is %lf.\n", pra1, pra2, pra3);
    changeParam(&pra1, &pra2, &pra3);
    printf("before pra1 is:%lf, pra2 is %lf pra3 is %lf.", pra1, pra2, pra3);

    // 编程练习7．编写一个函数，从标准输入中读取字符，直到遇到文件结尾。程序要报告每个字符是否是字母。
    // 如果是，还要报告该字母在字母表中的数值位置。例如，c和C在字母表中的位置都是3。
    // 合并一个函数，以一个字符作为参数，如果该字符是一个字母则返回一个数值位置，否则返回-1。
    check();

    return 0;
}

void largerOf(double *d1, double *d2) {
    *d1 = *d2 = *d1 > *d2? *d1 : *d2;
}

void changeParam(double *d1, double *d2, double *d3) {
    int max;
    int min;
    int second;
    max = *d1 > *d2? *d1 : *d2;
    max = max > *d3? max : *d3;

    min = *d1 > *d2? *d2 : *d1;
    min = min > *d3? *d3 : min;

    second = *d1 + *d2 + *d3 - max - min;

    *d1 = max;
    *d2 = second;
    *d3 = min;
}

int check(void) {
    char ch;
    int num;
    printf("\nPlease enter a char:");
    while (ch != '\n') {
        ch = getchar();
        num = location(ch);
        if (num == -1) {
            printf("%c is not alphabet", ch);
        } else {
            printf("%c is alphabet, location is %d.\n", ch, num);
        }
    }
}

int location(char ch) {
    if (!isalpha(ch)) {
        return -1;
    } else {
        if (ch >= 'a' && ch <= 'z') {
            return ch - 'a' + 1;
        } else {
            return ch - 'A' + 1;
        }
    }
}
