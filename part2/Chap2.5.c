// �ڶ���
// 2.5 ���������
/*
 * ��Ԫ���������������+��-��*��/��%��ȡģ���������
 * ����������ضϽ���е�С�����֡�
 * ���ʽ x % y���Ľ����x����y����������x�ܱ�y����ʱ����ֵΪ0.
 *
 * ȡģ����� % ����Ӧ����float��double���͡�
 * ���и�������������£�����������ȡ�ķ����Լ�ȡģ�������ķ���ȡ���ھ��������ʵ�֣�
 * ��ʹ������������������һ���ġ�
 *
 * ��Ԫ�����+��-������ͬ�����ȼ������ǵ����ȼ��������*��/��%�����ȼ��ͣ�
 * �������*��/��%�����ȼ��ֱ�һԪ�����+��-�����ȼ��͡�
 * ������������ô����ҵĽ�Ϲ���
 * */

#include <stdio.h>

int isLear(int a);

int main() {

    int year = 23;
    if ((year %  4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }
    printf("%d result", isLear(24));

    return 0;
}

int isLear(int year) {
    if ((year %  4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year\n", year);
        return 0;
    } else {
        printf("%d is not a leap year\n", year);
        return 1;
    }
}
