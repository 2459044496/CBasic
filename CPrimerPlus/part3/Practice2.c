#include <stdio.h>

// ÿ�������
#define SECONDSFORYEAY 3.156e7

int main() {
    // �����ϰ2����дһ������Ҫ����ʾ����һ��ASCII��ֵ���磬66����Ȼ���ӡ������ַ���
    int asciiCode;
    printf("Enter a ascii code:");
    scanf("%d", &asciiCode);
    printf("Your enter value is %d,in ascii code is %c", asciiCode, asciiCode);

    // �����ϰ3����дһ�����򣬷���һ��������Ȼ���ӡ������ı���
    printf("\n\aStartled by the sudden sound, Sally shouted,\n\"By the Great Pumpkin,what was that!\"");

    // �����ϰ4����дһ�����򣬶�ȡһ�����������ȴ�ӡ��С������ʽ���ٴ�ӡ��ָ����ʽ��
    // Ȼ�����ϵͳ֧�֣��ٴ�ӡ��p����������ʮ�����Ƽ���������
    // �����¸�ʽ�����ʵ����ʾ��ָ��λ����ϵͳ���죩��
    float fValue;
    printf("\nEnter a floating-point value:");
    scanf("%f", &fValue);
    printf("\nfixed-point notation:%.6f", fValue);
    printf("\nexponential notation:%e", fValue);
    printf("\np notation:%a", fValue);

    // �����ϰ5��һ���Լ��3.156��10��7�η��롣��дһ��������ʾ�û��������䣬Ȼ����ʾ�������Ӧ��������
    int yourAge;
    printf("\nPlease enter you age:");
    scanf("%d", &yourAge);
    printf("Your age convert seconds is%f", yourAge * SECONDSFORYEAY);

    return 0;
}