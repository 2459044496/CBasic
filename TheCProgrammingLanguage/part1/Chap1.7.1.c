#include <stdio.h>

float convert(float f); // �������

// �ú���ʵ���¶�ת��
main() {

    int i = 0;
    printf("�����¶�\t\t�����¶�\n");
    for ( ; i <= 300; i+=20) {
        printf("%4d %6.1f\n", i, convert(i));
    }
    return 0;
}

float convert(float celsius) {
    float fahr = 9.0 * celsius / 5.0 + 32.0;
    return fahr;
}
