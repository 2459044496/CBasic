#include <stdio.h>

void one_three();

void two();

// ��C�����У��������Ե�����һ����������дһ�����򣬵���һ����Ϊone_three()�ĺ������ú�����һ�д�ӡ���ʡ�one�����ٵ��õ�2������two()��Ȼ������һ�д�ӡ���ʡ�three����two()������һ����ʾ���ʡ�two����main()�����ڵ���one_three()����ǰҪ��ӡ���starting now:�������ڵ�����Ϻ���ʾ���done!����
int main() {
    printf("starting now:");
    one_three();
    printf("\ndone!");
    return 0;
}

void one_three() {
    printf("\none");
    two();
    printf("\nthree");
}

void two() {
    printf("\ntwo");
}