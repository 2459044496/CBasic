#include <stdio.h>

#define BLURB "Authentic imitation" // blurb ������
// �ַ�����ʽ
int main(void) {

    printf("[%2s]\n", BLURB);// [Authentic imitation]
    // ת��˵����%2s�������ֶα�����Ϊ�������ַ����е������ַ���

    printf("[%24s]\n", BLURB);// [     Authentic imitation]

    printf("[%24.5s]\n", BLURB);// [                   Authe]
    // .5����printf()ֻ��ӡ5���ַ�

    printf("[%-24.5s]\n", BLURB);// [Authe                   ]
    // -���ʹ���ı�����������

    // [Authentic imitation]
    // [     Authentic imitation]
    // [                   Authe]
    // [Authe                   ]
    return 0;
}