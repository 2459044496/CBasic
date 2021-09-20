#include <stdio.h>

void toBaseN(unsigned int, int);
int fibonacci(int);

int main(void) {

    // �����ϰ10��Ϊ���ó����嵥9.8�е�to_binary()������ͨ�ã���дһ��to_base_n()������������������
    // �ҵڶ���������2��10��Χ�ڣ�Ȼ���Ե�2��������ָ���Ľ��ƴ�ӡ��1����������ֵ��
    // ���磬to_base_n(129�� 8)��ʾ�Ľ��Ϊ201��Ҳ����129�İ˽�������
    // ��һ�������ĳ����в��Ըú�����
    toBaseN(100, 8);

    // �����ϰ11����д������Fibonacci()�������ú�����ѭ������ݹ����쳲���������
    printf("\nFibonacci 10 is %d", fibonacci(100));


    return 0;
}

void toBaseN(unsigned int num, int base) {
    int r;
    r = num % base;
    if (num >= base) {
        toBaseN(num / base, base);
    }
    printf("%d", r);
}

// ѭ��ʵ��쳲���������
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    int n1 = 1;
    int n2 = 1;
    int sum;
    for (int i = 3; i <= n; ++i) {
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }
    return sum;
}
