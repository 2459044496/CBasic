#include <stdio.h>
#include <math.h>

// �������Ƚ�
int main(void){

    const double ANSWER = 3.14159;
    double response;

    printf("What is the value of pi?");
    scanf("%lf", &response);

    // ѭ����һֱ��ʾ�û��������룬�����û������ֵ����ȷֵ֮��������0.0001��
    while (fabs(response - ANSWER) > 0.0001) {
        printf("Try again!\n");
        scanf("%lf", &response);
    }

    printf("Close enough!\n");
    return 0;
}
