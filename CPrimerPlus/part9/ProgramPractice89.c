#include <stdio.h>
#include <string.h>

double power(double, int);
double powerUseRecursive(double, int);

int main(void) {

    // �����ϰ8��power()��������һ��double�����������������ݡ��Ľ��ú�����ʹ������ȷ���㸺�ݡ�
    // ���⣬����Ҫ����0���κδ��ݶ�Ϊ0���κ�����0���ݶ�Ϊ1������Ӧ����0��0����δ���壬
    // ��˰Ѹ�ֵ����Ϊ1����Ҫʹ��һ��ѭ�������ڳ����в��Ըú�����
    for (int i = 5; i >= -5; --i) {
        printf("2.1 de %d power is %lf.\n", i, power(2.1, i));
    }

    printf("\n========================\n");

    // �����ϰ9��ʹ�õݹ麯����д�����ϰ8��
    for (int i = 5; i >= -5; --i) {
        printf("2.1 de %d power is %lf.\n", i, powerUseRecursive(2.1, i));
    }

    return 0;
}

double power(double num, int pow) {
    if (pow == 0) {
        if (num == 0) {
            printf("0^0 undefined\n");
        }
        return 1;
    }
    if (num == 0) {
        return 0;
    }

    double result = 1;

    if (pow > 0) {
        for (int i = 1; i <= pow; ++i) {
            result*= num;
        }
        return result;
    } else {
        for (; pow < 0; ++pow) {
            result*= num;
        }
        return 1 / result;
    }
}

double powerUseRecursive(double num, int pow) {
    if (pow == 0) {
        if (num == 0) {
            printf("0^0 undefined\n");
        }
        return 1;
    }
    if (num == 0) {
        return 0;
    }

    if (pow > 0) {
        return num * power(num, pow - 1);
    } else {
        return 1 / (num * power(num, pow + 1));
    }
}
