#include <stdio.h>

// 	printf()����ʹ��%fת��˵����ӡʮ���Ƽ�������float��double���͸�������
// 	��%e��ӡָ���������ĸ����������ϵͳ֧��ʮ�����Ƹ�ʽ�ĸ�����������a��A�ֱ����e��E��
// 	��ӡlong double����Ҫʹ��%Lf��%Le��%Laת��˵����
int main(void) {
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;
    printf("%f can be writeen %e\n", aboat, aboat);
    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
    printf("%f can be writeen %e\n", abet, abet);
    printf("%Lf can be writeen %Le\n", dip, dip);

    // 32000.000000 can be writeen 3.200000e+004
    // And it's 0x1.f40000p+14 in hexadecimal, powers of 2 notation
    // 2140000000.000000 can be writeen 2.140000e+009
    // 0.000000 can be writeen 3.205261e-317

    // һ�����磨overflow����ʾ����
    float toobig= 3.4E38 * 100.0f;
    printf("%e\n",toobig);
    // 1.#INF00e+000
    // ����������»��toobig��һ����ʾ�������ض�ֵ������printf()��ʾ��ֵΪinf��infinity�����߾����������������ݣ���


    return 0;
} 