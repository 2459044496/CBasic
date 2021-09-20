#include <stdio.h>
#include <string.h>
#include <ctype.h>

void largerOf(double *, double *);
void changeParam(double *, double *, double *);
int check(void);
int location(char);

int main(void) {

    // �����ϰ5����д������һ������larger_of()���ú���������double���ͱ�����ֵ�滻Ϊ�ϴ��ֵ��
    // ���磬largerOf(x, y)���x��y�нϴ��ֵ���¸�������������
    double d1 = 12.3;
    double d2 = 4334.12;
    printf("before d1 is:%lf, d2 is %lf.\n", d1, d2);
    largerOf(&d1, &d2);
    printf("after d1 is:%lf, d2 is %lf.\n", d1, d2);

    // �����ϰ6����д������һ���������ú�����3��double�����ĵ�ַ��Ϊ����������Сֵ�����1��������
    // �м�ֵ�����2�����������ֵ�����3��������
    double pra1 = 101.235;
    double pra2 = 12.0;
    double pra3 = 66;
    printf("before pra1 is:%lf, pra2 is %lf pra3 is %lf.\n", pra1, pra2, pra3);
    changeParam(&pra1, &pra2, &pra3);
    printf("before pra1 is:%lf, pra2 is %lf pra3 is %lf.", pra1, pra2, pra3);

    // �����ϰ7����дһ���������ӱ�׼�����ж�ȡ�ַ���ֱ�������ļ���β������Ҫ����ÿ���ַ��Ƿ�����ĸ��
    // ����ǣ���Ҫ�������ĸ����ĸ���е���ֵλ�á����磬c��C����ĸ���е�λ�ö���3��
    // �ϲ�һ����������һ���ַ���Ϊ������������ַ���һ����ĸ�򷵻�һ����ֵλ�ã����򷵻�-1��
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
