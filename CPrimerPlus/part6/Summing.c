#include <stdio.h>

// �����û�������������
int main(void){

    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed");
    printf("(q to quit):");// ʵ���ϣ���������q���κη���ֵ�����ݶ��ᵼ��ѭ����ֹ��
    status = scanf("%ld", &num);
    // while (scanf("%ld", &num) == 1) ���ַ�ʽ�����
    while (status == 1) {
        sum+=num;
        printf("Please enter next integer (q to quit):");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);
    return 0;
}
