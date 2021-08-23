#include <stdio.h>

#define MAXLINE 1000 // ���������е���󳤶�

int getline(char line[], int maxline); // �������


// ��ϰ1-18ɾ��ÿ��������ĩβ�Ŀո��Ʊ������ɾ����ȫ�ǿո���С�
main() {

    int len; // ��ǰ�г���
    char line[MAXLINE]; // ��ǰ��������

    while ((len = getline(line, MAXLINE)) > 0) {
        printf("%s\n", line);
    }

    return 0;
}

// getline��������һ�ж���s�в������䳤�ȣ���ɾ��ÿ��������ĩβ�Ŀո��Ʊ����ɾ����ȫ�ǿո����
int getline(char s[], int lim) {
    int c;
    int i;
    int k;

    for (i = 0; i <lim-1 && (c=getchar()) != EOF && c != '\n' ; ++i) {
        s[i] = c;
    }
    for (k = i-1; s[k] == ' ' || s[k] == '\t' ; k--) {
        s[k] = '\0';
    }

    return k;
}
