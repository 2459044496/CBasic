#include <stdio.h>

// ��ʮ������ʾ���֣�ʹ��%d���԰˽�����ʾ���֣�ʹ��%o����ʮ��������ʾ���֣�ʹ��%x��
// Ҫ��ʾ����������ǰ׺0��0x��0X������ֱ�ʹ��%#o��%#x��%#X��
int main(void) {
    int x = 100;
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

    // dec = 100; octal = 144; hex = 64
    // dec = 100; octal = 0144; hex = 0x64
    return 0;
}
