#include <stdio.h>

// ʹ�ñ������ֶ�
int main(void) {

    unsigned width, precision;// precision ����
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width:\n");
    scanf("%d", &width);
    printf("The number is :%*d:\n", width, number);

    printf("Now enter a width and a precision:\n");
    scanf("%d %d", &weight, &precision);
    printf("Weight = %*.*f\n", width, precision, weight);

    printf("Done!\n");

    // ����û���������6�����6�ǳ���ʹ�õ��ֶο�ȡ����Ƶأ��������û�����8��3��
    // ˵���ֶο����8��С���������ʾ3λ���֡�һ����ԣ�����Ӧ����weight��ֵ��������Щ������ֵ��

    // Enter a field width:
    // 6
    // The number is :   256:
    // Now enter a width and a precision:
    // 8 3
    // Weight = 242.500
    // Done!
    return 0;
}