#include <stdio.h>
#include <string.h>

#define BOOK "War and Peace"

int main(void) {
    
    // �����ϰ5����ӡ��������
    float cost = 12.99;
    float percent = 80.0;

    printf("This copy is \"%s\" sells for $%2.2f.\nThat is %2.0f%% of list",
           BOOK, cost, percent);

    // �����ϰ9���ֱ�д����ȡ���и������е�scanf()��䣬������������õ����������顣
    // 101
    // 22.32 8.34E-09
    // linguini
    // catch 22
    // catch 22(��������catch)
    int i;
    scanf("%d", &i);
    printf("\n%d", i);
    float float1, float2;
    scanf("%f, %e", &float1, &float2);
    printf("\n%2.2f %e", &float1, &float2);
    char char1[100];
    scanf("%s", char1);
    printf("\n%s", char1);
    char char2[100];
    int i2;
    scanf("%s%d", char2, &i2);
    printf("\n%s %d", char2, i2);
    char char3[100];
    int i3;
    scanf("%*s %d", char3, &i3);
    printf("\n%s %d", char3, i3);

    return 0;
}