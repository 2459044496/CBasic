#include <stdio.h>

double min(double, double);
void chLine(char, int, int);
double harmonicMean(double, double);

int main(void) {

    // �����ϰ1�����һ������min(x, y)����������double����ֵ�Ľ�Сֵ��
    // ��һ���򵥵����������в��Ըú�����
    printf("min result is:%lf\n", min(12.3, 2.3e4));

    // �����ϰ2�����һ������chLine(ch, i, j)����ӡָ�����ַ�j��i�С�
    // ��һ���򵥵����������в��Ըú�����
    chLine('c', 3, 4);

    // �����ϰ4�������ĵ���ƽ�����������㣺�ȵõ������ĵ�����Ȼ���������������ƽ��ֵ��
    // ���ȡ�������ĵ�������дһ����������������double���͵Ĳ��������������������ĵ���ƽ������
    printf("harmonicMean is %lf", harmonicMean(2.3, 4.6));

    return 0;
}

double min(double d1, double d2) {
    return d1 > d2? d1 : d2;
}

void chLine(char ch, int i, int j) {
    for (int k = 1; k <= i; ++k) {
        for (int l = 1; l <= j; ++l) {
            putchar(ch);
        }
        putchar('\n');
    }
}

double harmonicMean(double d1, double d2) {
    return 1 / ((1 / d1 + 1 / d2) / 2.0);
}