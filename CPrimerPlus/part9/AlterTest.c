#include <stdio.h>

void alter(int *u, int *v);

// ��ϰ��6�����һ����Ϊalter()�ĺ�������������int���͵ı���x��y��
// �����ǵ�ֵ�ֱ�ĳ���������֮���Լ�������֮�
int main(void) {

    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    alter(&x, &y);
    printf("Now x = %d and y = %d.\n", x, y);
}

void alter(int *u, int *v) {

    int sum = *u + *v;
    int sub = *u - *v;
    *u = sum;
    *v = sub;
}

/*void alter(int *u, int *v) {

    int temp;
    temp = *u + *v;
    *v = *u - *v;
    *u = temp;
}*/

/*
void alter(int *u, int *v) {

    *u = *u + *v;
    *v = *u - 2 * *v;
}*/
