#include <stdio.h>

// printf()�ķ���ֵ
int main(void) {

    int bph2o = 212;
    int rv;
    rv= printf("%d F is water's boiling point.\n", bph2o);

    printf("The printf() function printed %d characters.\n", rv);

    // 212 F is water's boiling point.
    // The printf() function printed 32 characters.

    // ע�������������ַ����������ո�Ͳ��ɼ��Ļ��з���\n��
    //  F is water's boiling point.\n��29���ַ�����212��32���ַ�
    return 0;
}