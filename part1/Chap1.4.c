// ��һ��
// 1.4���ų���  #defineָ���е�ĩβû�зֺ�
// ����  #define  ����  �滻�ı�

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

// ʹ�÷��ų���
main() {
    int fahr; // �����¶�

    printf("�����¶�\t�����¶�\n");
    for (fahr = LOWER; fahr <= UPPER; fahr=fahr+STEP) {
        printf("%4d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
    }

}