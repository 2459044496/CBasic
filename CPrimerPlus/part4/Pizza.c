#include <stdio.h>

#define PI 3.14159

// defineָ��ʹ��ʾ��
#define BEEP '\a'
#define TEE 'T'
#define ESC '\033'
#define OOPS "Now you have done it!"

// ����ĸ�ʽ
#define TOES =20

// �ڱ�������ʹ���Ѷ���ĳ���
int main(void) {
    float area, circum, radius;// area ��� circum�������� radius �뾶

    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circum = 2.0 * PI * radius;

    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);// circumference Բ�ܳ�

    // What is the radius of your pizza?
    // 3.4
    // Your basic pizza parameters are as follows:
    // circumference = 21.36, area = 36.32
    return 0;
}