// ������
// 3.7 break�����continue���
/*
 * break�������ڴ�for��while��do-while��ѭ������ǰ�˳�������ͬ��switch�������ǰ�˳�һ����
 * break�����ʹ�����switch�������ڲ�ѭ��������������
 *
 * continue�������ʹfor��while��do-while��俪ʼ��һ��ѭ����ִ�С�
 * ��while��do-while����У�continue����ִ����ζ������ִ�в��Բ��֣�
 * ��forѭ���У�����ζ��ʹ����ת�Ƶ�����ѭ���������֡�
 * continueֻ����ѭ����䣬������switch��䡣
 *
 * */

#define num1 5

#include <stdio.h>

int main() {
    for (int i = 0; i < num1; ++i) {
        printf("\n�����ⲿѭ��%d", i);
        for (int j = 0; j < num1; ++j) {
            if( j == 3) {
                break;
            }
            printf("�����ڲ�ѭ��%d\t", j);
        }
    }

    for (int i = 0; i < num1; ++i) {
        printf("\n�����ⲿѭ��%d", i);
        for (int j = 0; j < num1; ++j) {
            if( j == 3) {
                continue;
            }
            printf("�����ڲ�ѭ��%d\t", j);
        }
    }
    return 0;
}
