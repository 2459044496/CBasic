// ��һ��
// 1.5.4���ʼ���

#include <stdio.h>

#define IN 1 // �ڵ�����
#define OUT 2 // �ڵ�����

// �ַ�����
main() {

    int c;
    int nl = 0; // ����
    int nw = 0; // ������
    int nc = 0; // �ַ���
    int state = OUT; // �Ƿ���һ��������

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }

    printf("����:%d\n������%d\n�ַ���%d", nl, nw, nc);

}
