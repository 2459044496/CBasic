#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 6:���������������20��10��99֮�䣨����10��99���������������һά����A��ͳ���ڷ�Χ30��70֮�䣨����30��70���ĸ�����
int main ()
{
    int A[100];
    int num = 20;
    int count = 0;

    srand((unsigned)time(NULL));
    for (int i = 0; i < num; ++i) {
        A[i] = rand() % 90 + 10;
        if (A[i] >=30 && A[i] <= 70) {
            count++;
        }
    }

    printf("��Χ30��70֮��ĸ���Ϊ:%d", count);
    
    return 0;
}