#include <stdio.h>

// ָ�����
// �����������֧��%pת��˵����������%u��%lu����%p��
// �����������֧����%tdת��˵����ӡ��ַ�Ĳ�ֵ��������%d��%ld�����档
int main() {

    int urn[5] = {100, 200, 300, 400, 500};
    int *ptr1, *ptr2, *ptr3;
    ptr1 = urn;// ��һ����ַ����ָ��
    ptr2 = &urn[2];// ��һ����ַ����ָ��
    // printf("ptr1 + ptr2 = %p\n", (ptr1 + ptr2)); ָ������������
    // printf("ptr1 * ptr2 = %p\n", (ptr1 * ptr2)); ָ������������

    // ������ָ�룬�Լ����ָ��ĵ�ַ
    printf("Pointer value, dereferenced pointer, pointer address:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

    // ָ��ӷ�
    ptr3 = ptr1 + 4;
    printf("\badding an int to a pointer:\n");
    printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));

    // ����ָ��
    ptr1++;
    printf("\nvalues after ptr1++:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

    // �ݼ�ָ��
    ptr2--;
    printf("\nvalues after --ptr2:\n");
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);

    // �ָ�Ϊ��ʼֵ
    --ptr1;
    ++ptr2;
    printf("\nPointers reset to original values:\n");
    printf("ptr1 = %p, ptr2 = %p", ptr1, ptr2);

    // һ��ָ���ȥ��һ��ָ��
    printf("\nsubtracting one pointer from another:\n");
    printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);

    // һ��ָ���ȥһ������
    printf("\nsubtracting an int from a pointer:\n");
    printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);

    return 0;
}