#include <stdio.h>

// 3:��һ��4��4�����;�������Խ����ϵ�Ԫ��֮�͡�
int main ()
{
    int array[4][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8,},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};

    int sum;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if((i==j) || ((i+j)==3))
            {
                sum+=array[i][j];
            }
        }
    }
    printf("�Խ����ϵĺ�=%d\n",sum);

/*
    int i,j;
    int a[4][4];
    int sum=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
            if((i==j) || ((i+j)==3))
            {
                sum+=a[i][j];
            }
        }
    }
    printf("�Խ����ϵĺ�=%d\n",sum);
*/

    return 0;
}