#include <stdio.h>

#define MAXLINE 1000 // ���������е���󳤶�

int getline(char line[], int maxline); // �������


// ��ϰ1-17��ӡ���ȴ���80���ַ�������������
main() {

    int len; // ��ǰ�г���
    char line[MAXLINE]; // ��ǰ��������

    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > 80) {
            printf("%s\n", line);
        }
    }

    return 0;
}

// getline��������һ�ж���s�в������䳤��
int getline(char s[], int lim) {
    int c;
    int i;

    for (i = 0; i <lim-1 && (c=getchar()) != EOF && c != '\n' ; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}
