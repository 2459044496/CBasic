#include <stdio.h>

// ��ӡ�ϳ����ַ���
int main(void) {
    // ���ַ���������3�ַ���

    printf("Here's one way to print a ");
    printf("long string.\n");// Here's one way to print a long string.
    // ����1��ʹ�ö��printf()��䡣��Ϊ��1���ַ���û����\n�ַ����������Ե�2���ַ���������1���ַ���ĩβ�����

    printf("Here's another way to print a \
long string.\n");// Here's another way to print a long string.
    printf("Here's another way to print a \
    long string.\n");// Here's another way to print a     long string.
    // ����2���÷�б�ܣ�\����Enter����Return������������С���ʹ�ù��������һ�У������ַ����в���������з�����Ч��������һ�м��������
    // ���ǣ���һ�д������ͳ����嵥�еĴ���һ��������߿�ʼ������������У���������5���ո���ô��5���ո�ͻ��Ϊ�ַ�����һ���֡�

    printf("Here's the newest way to print a"
           "long string.\n");// Here's the newest way to print along string.
    // ����3��ANSI C������ַ������ӡ���������˫�������������ַ���֮���ÿհ׸�����C��������Ѷ���ַ���������һ���ַ�����


    // Here's one way to print a long string.
    // Here's another way to print a long string.
    // Here's another way to print a     long string.
    // Here's the newest way to print along string.
    return 0;
}