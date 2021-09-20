#include <stdio.h>

void toBinary(unsigned long n);

// �Զ�������ʽ��ӡ����
int main(void) {

    int num;

    printf("1 / 2 = %d\n", 1 / 2);
    printf("1 %% 2 = %d\n", 1 % 2);
    printf("0 / 2 = %d\n", 0 / 2);
    printf("0 %% 2 = %d\n", 0 % 2);

    printf("Enter an integer value(q to quit):\n");

    while (scanf("%d", &num) == 1) {
        toBinary(num);
        printf("Enter an integer value(q to quit):\n");
    }

    return 0;
}

// �ݹ麯��
void toBinary(unsigned long n) {
    int r;
    r = n % 2;
    if (n >= 2) {
        toBinary(n / 2);
    }
    putchar(r == 0 ? '0' : '1');
}