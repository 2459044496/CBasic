#include <stdio.h>

// 7:ʹ��ѡ�񷨣�������ia(1)=8,ia(2)=6,ia(3)=9,ia(4)=3,ia(5)=2,ia(6)=7���Ӵ�С���򣬲���һ���������
int main ()
{
    int ia[] = {8, 6, 9, 3, 2, 7};

    int iaLength = sizeof(ia) / sizeof(int);

    // ����
    int p, t;
    for (int j = 0; j < iaLength - 1; ++j) {
        p = j;
        for (int i = j + 1; i < iaLength; ++i) {
            if(ia[p] < ia[i]) {
                p = i;// ���Ԫ��λ��
            }
        }
        // ����λ��
        if(p != j) {
            t = ia[j];
            ia[j] = ia[p];
            ia[p] = t;
        }
    }

    printf("�����Ϊ:");
    for (int m = 0; m < iaLength; ++m) {
        printf("%d\t", ia[m]);
    }


    
    return 0;
}