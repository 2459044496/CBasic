#include <stdio.h>

int main(void) {

    // �����ϰ3����дһ�����򣬶�ȡһ����������������С�����������ӡ��Ȼ����ָ����������ӡ��
    // ������ĸ�ʽ���������ϵͳ��ͬ��ָ����������ʾ��λ�����ܲ�ͬ����
    // The input is 21.3 or 2.1e+001.
    // The input is +21.290 or 2.129E+001
    float float1;
    printf("Enter a float value:");
    scanf("%f", &float1);
    printf("The input is %2.1f or %.1e", float1, float1);
    float float2;
    printf("\nEnter a float value again:");
    scanf("%f", &float2);
    printf("The input is %+2.3f or %.3E", float2, float2);


    // �����ϰ4����дһ��������ʾ�û�������ߣ���λ��Ӣ�磩��������
    // Ȼ��������ĸ�ʽ��ʾ�û����������Ϣ��
    char name[20];
    float height;
    printf("\nPlease enter your name and height:");
    scanf("%s %f", name, &height);
    printf("%s,you are %1.3f feet tall", name, height);
    printf("\n%s,you are %1.3f meter tall", name, height / 100);


    // Enter a float value:21.3
    // The input is 21.3 or 2.1e+001
    // Enter a float value again:21.290
    // The input is +21.290 or 2.129E+001
    // Please enter your name and height:cuipai 170
    // cuipai,you are 170.000 feet tall
    // cuipai,you are 1.700 meter tall
    return 0;
}