#include <stdio.h>

void jolly();

void deny();

// ��дһ�������������������
// ����main()�������⣬�ó���Ҫ���������Զ��庯����һ����Ϊjolly()�����ڴ�ӡǰ3����Ϣ������һ�δ�ӡһ������һ��������Ϊdeny()����ӡ���һ����Ϣ��
int main() {
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly() {
    printf("For he's a jolly good fellow!\n");
}

void deny() {
    printf("Which nobody can deny!");
}