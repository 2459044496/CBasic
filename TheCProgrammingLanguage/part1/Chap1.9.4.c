#include <stdio.h>

#define MAXLINE 1000 // ���������е���󳤶�

void reverse(char s[]); // �������


// ��ϰ1-19���ַ���s��˳��ߵ�����
main() {
    char s[] = "Char Value";
    printf("s value:%s\n", s);
    reverse(s);
    printf("s value:%s\n", s);
    return 0;
}

// ���ַ���s��˳��ߵ�����
void reverse(char s[]) {
    char temp;
    int i = 0;
    while (s[i] != '\0') {
        ++i;
    }
    --i; // ȥ��\0
    if (s[i] == '\n') {
        --i;
    }

    int j = 0;

    while (j < i) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        --i;
        ++j;
    }
}
