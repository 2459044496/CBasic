// ��һ��
// 1.5.2�м���
/**
 * ==   ����
 * ��A��  65
 * '\n' �����з���ֵ  "\n"�ַ�������
 */

#include <stdio.h>

// �ַ�����
main() {

    int c;
    int nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
    }
    printf("��:%d��", nl);

}
