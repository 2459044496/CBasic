#include <stdio.h>

void interChange(int *u, int *v);

// ʹ��ָ������������������
int main(void) {

    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    interChange(&x, &y);// �ѵ�ַ���͸�����
    printf("Now x = %d and y = %d.\n", x, y);
}

void interChange(int *u, int *v) {
    int temp;
    temp = *u;// temp���u��ָ������ֵ
    *u = *v;
    *v = temp;
}