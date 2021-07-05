// ������
// 3.5 whileѭ����forѭ��
/*
 * whileѭ�����
 * while�����ʽ��{
 *      ���
 * }
 * ��������ʽ��ֵ�������ֵΪ���0����ִ����䣬���ٴ���ñ��ʽ��ֵ��
 * ֱ���ñ��ʽ��ֵΪ�٣�0��Ϊֹ��������ִ��������Ĳ��֡�
 *
 * forѭ�����
 * for�����ʽ1 : ���ʽ2 : ���ʽ3�� {
 *      ���
 * }
 * �ȼ�������while��䣺
 * ���ʽ1;
 * while�����ʽ2�� {
 *      ���
 *      ���ʽ3;
 * }
 * ����while��forѭ������а���continue���ʱ����������֮��Ͳ�һ���ȼ��ˡ�
 *
 *
 * for( ; ; ) {
 *      ...
 * }
 * ��һ�������ޡ�ѭ����䣬���������Ҫ���������ֶΣ���break����continue��䣩������ֹ���С�
 *
 *
 *
 * */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

/*
 * ����пհ׷��Ļ���������
 * ����з��ŵĻ������ȡ����
 * ȡ�������֣���ִ��ת��
 * */
int atoi(char s[]);

// shellsort���������յ���˳���v[0]...v[n-1]��������
void shellsort(int v[], int n);

// �����ַ���s�и����ַ���λ��
void reverse(char s[]);

int main() {
    char s[] = {'3', '1', '+', 'a', '-'};
    printf("value: %d", atoi(s));
    int i1[] = {3, 1, 2, 6, 10};
    shellsort(i1, 5);
    reverse(s);
    for (int i = 0; i < strlen(s); ++i) {
        printf("\n %c", s[i]);
    }
    return 0;
    /* ���
     * n value:3
     * n value:31
     * value:31
     * */
}

int atoi(char s[]) {
    int i, n, sign;

    for (i = 0; isspace(s[i]); i++) {// �����հ׷�
        ;
    }
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-') {// ��������
        i++;
    }
    for (n = 0; isdigit(s[i]) ; i++) {
        n = 10 * n + (s[i] - '0');
        printf("n value:%d\n", n);
    }

    return sign * n;
}

void shellsort(int v[], int n) {
    int gap, i, j, temp;

    for (gap = n/2; gap > 0 ; gap /= 2) {
        for (i = gap; i < n; i++) {
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
        }
    }
    for (int k = 0; k < n; ++k) {
        printf("\n%d", v[k]);
    }
}

void reverse(char s[]) {
    int c, i, j;

    for (i = 0, j = strlen(s)-1 ; i < j ; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
