#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 1:��֪һ������10��������һά���飬��Ԫ��ֵ�����������Χ��[10��99]�ڣ��������һά�����е���Сֵ��
int main ()
{
    int data[10];// �洢����Ԫ��
    int min;// �洢��Сֵ

    srand((unsigned)time(NULL));
    for(int i = 0; i < 10; ++i) {
        data[i] = rand() % 90 + 10;
    }

    min = data[0];

    for(int i = 0; i < 10; ++i) {
        printf("%d\n", data[i]);
    }
    for (int j = 1; j < 10; ++j) {
        if (data[j] < min) {
            min = data[j];
        }
    }
    printf("������СֵΪ%d", min);

    return 0;
}