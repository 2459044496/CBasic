// ��һ��
// 1.6 ����

#include <stdio.h>

// ͳ�Ƹ������֡��հ׷��������ַ����ֵĴ���
main() {
    int c;
    int nwhite = 0; // �հ׷����ִ���
    int nother = 0; // �����ַ����ִ���
    int ndight[10]; // ����      dight����
    for (int i = 0; i < 10; i++) {
        ndight[i] = 0;
    }

    char abc = '0';
    printf("avalue:%d\n", abc); // ���Ϊ48

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            // c-'0'��һ�����ͱ��ʽ������洢��c�е��ַ��ǡ�0��~��9����
            // ��ֵ��Ϊ0~9
            // '0'~'9'��char ��ֵΪ48��49��50�����������Լ�ȥ'a'48����Ϊ0��1��2������
            printf("testa:%d", c);
            printf("testb:%d", c-'0');
            ++ndight[c-'0'];
        } else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        } else {
            ++nother;
        }
    }

    printf("digits ==");

    for (int j = 0; j < 10; j++) {
        printf(" %d", ndight[j]);
    }

    printf(", white space = %d, other = %d\n", nwhite, nother);

}
