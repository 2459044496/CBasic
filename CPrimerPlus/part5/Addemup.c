#include <stdio.h>

// ����ǰ20��������
int main(void){

    int count, sum;// ����
    count = 0;// ���ʽ���
    sum = 0;// ���ʽ���

    while (count++ < 20) {// �������
        sum = sum + count;
    }
    printf("sum =%d\n", sum);

    // sum =210
    return 0;// ��ת���
}
