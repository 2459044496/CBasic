#include <stdio.h>

// ת��˵��ʾ��
int main(void) {
    float float1 = 3.1415929;
    // %a/%A ��������ʮ����������p������
    // %f ��������ʮ���Ƽ�����
    // %e/%E ��������e������
    // %g/%G ����ֵ�Ĳ�ͬ���Զ�ѡ��%f��%e��%e��ʽ����ָ��С��-4���ߴ��ڵ��ھ���ʱ
    printf("%a\t%A\t%f\t%e\t%E\t%g\t%G", float1, float1, float1, float1, float1, float1);
    // 0x1.921fb8p+1   0X1.921FB8P+1   3.141593        3.141593e+000   3.141593E+000   3.14159 2.07694E-317

    char char1 = 'C';
    int int1 = 88;
    // %c �����ַ�
    printf("\nchar1 value is:%c,int1 show char:%c", char1, int1);
    // char1 value is:C,int1 show char:X

    int int2 = 100;
    // %d/%i �з���ʮ��������
    // %o �޷��Ű˽�������
    // %u �޷���ʮ��������
    // %x/%X �޷���ʮ������������ʹ��ʮ��������0f/F
    // %#o %#x %#X ��ӡ��ǰ׺0 0x 0X
    printf("\n%d\t%i\t%o\t%u\t%x\t%X", int2, int2, int2, int2, int2, int2);
    printf("\n%d\t%i\t%#o\t%u\t%#x\t%#X", int2, int2, int2, int2, int2, int2);
    // 100     100     144     100     64      64
    // 100     100     0144    100     0x64    0X64

    char name[] = "CuiPai";
    // %s �ַ���
    printf("\nname is %s", name);
    // name is CuiPai

    // %p ָ��
    printf("\nname pointer is%p", name);
    // name pointer is000000000062FE00

    // %% ��ӡһ���ٷֺ�
    printf("\n%%");
    return 0;
}