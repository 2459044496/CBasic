#include <stdio.h>

// sizeof��C���Ե���������������ֽ�Ϊ��λ����ָ�����͵Ĵ�С��
// C99��C11�ṩ%zdת��˵��ƥ��sizeof�ķ������ͣ���size_t���ͣ���
// һЩ��֧��C99��C11�ı���������%u��%lu����%zd��
int main(void) {
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
    printf("Type double has a size of %zd bytes.\n", sizeof(double));
    printf("Type long double has a size of %zd bytes.\n", sizeof(long double));
    printf("Type short has a size of %zd bytes.\n", sizeof(short));
    printf("Type float has a size of %zd bytes.\n", sizeof(float));
    // ���������й�
    // Type int has a size of 4 bytes.
    // Type char has a size of 1 bytes.
    // Type long has a size of 4 bytes.
    // Type long long has a size of 8 bytes.
    // Type double has a size of 8 bytes.
    // Type long double has a size of 16 bytes.
    // Type short has a size of 2 bytes.
    // Type float has a size of 4 bytes.
    return 0;
}
	
