#include <stdio.h>

int main(void) {
    // ������������ַ���������char���ͱ���grade��ֻ�����8λ��Ч����ˣ�grade��ֵ��'E'��
    char ch1 = 'FATE';
    printf("%c\n", ch1);// E

    char ch;
    printf("Please enter a character.\n");
    scanf("%c", &ch);// �û������ַ�
    printf("The code for %c is %d.\n", ch, ch);

    // Please enter a character.
    // C
    // The code for C is 67.
    return 0;
}