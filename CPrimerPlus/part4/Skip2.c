#include <stdio.h>

// ���������е�ǰ��������
int main(void) {

    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);

    printf("The last integer was %d\n", n);

    // �����scanf()ָʾ�����������������ѵ�3������������n��

    // Please enter three integers:
    // 12 13 14
    // The last integer was 14
    return 0;
}