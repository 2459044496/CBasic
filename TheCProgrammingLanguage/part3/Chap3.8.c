// ������
// 3.8 goto�������
/*
 * goto��������������ѭ����
 * ������ʹ��
 * */

#define num1 5

#include <stdio.h>

int main() {
    for (int i = 0; i < num1; ++i) {
        printf("\n�����ⲿѭ��%d", i);
        for (int j = 0; j < num1; ++j) {
            if( i == 2 && j == 3) {
                goto over;
            }
            printf("�����ڲ�ѭ��%d\t", j);
        }
    }

    over:
        printf("\nover!!!");
    return 0;
}
