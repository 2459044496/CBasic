#include <stdio.h>

// ��ϰ1-12   ��ÿ��һ�����ʵ���ʽ��ӡ�����롣
main() {

    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
        if (c == ' ' || c == '\n' || c == '\t') {
            putchar('\n');
        }
    }
}
