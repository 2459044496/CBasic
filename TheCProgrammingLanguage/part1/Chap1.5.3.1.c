#include <stdio.h>

// ��ϰ1-8    ��дһ��ͳ�ƿո��Ʊ���뻻�з������ĳ���
main() {

    int c;
    int space = 0; // �ո�
    int nt = 0; // �Ʊ��
    int nl = 0; // ���з�

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
        if (c == '\t') {
            ++nt;
        }
        if (c == ' ') {
            ++space;
        }
    }
    printf("��:%d���ո�;\n��:%d���Ʊ��;\n��:%d��", space, nt, nl);

}
