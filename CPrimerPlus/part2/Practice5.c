#include <stdio.h>

void br();

void ic();

// ��дһ�������������������
// ����main()���⣬�ó���Ҫ���������Զ��庯����һ����Ϊbr()������һ�δ�ӡһ�Ρ�Brazil, Russia������һ����Ϊic()������һ�δ�ӡһ�Ρ�India, China��������������main()��������ɡ�
int main() {

    br();
    printf("\t");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();
    return 0;
}

void br() {
    printf("Brazil, Russia");
}

void ic() {
    printf("India, China");
}