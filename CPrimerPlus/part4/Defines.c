#include <stdio.h>
#include <limits.h>// ��������
#include <float.h>// ����������

// ʹ��limit.h��float.hͷ�ļ��ж������ʾ����
int main(void) {

    printf("Some number limits for this system:\n");
    printf("Biggest int: %d\n", INT_MAX);
    printf("Smallest long long: %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this system.\n", CHAR_BIT);

    printf("Largest double: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("float precision = %d digits\n", FLT_DIG);// precision ����
    printf("float epsilon = %e\n", FLT_EPSILON);// epsilon ��С���

    return 0;
}