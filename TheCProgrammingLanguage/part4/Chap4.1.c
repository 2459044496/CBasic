// ������
// 4.1 �����Ļ���֪ʶ
/*
 * �����Ķ�����ʽ���£�
 * ����ֵ����    ������������������
 * {
 *      ���������
 * }
 *
 * �����ú���ͨ��return���������߷���ֵ��return���ĺ�����Ը��κα��ʽ��
 * return   ���ʽ;
 *
 * */

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int max);

int strindex(char source[], char searchfor[]);

char pattern[] = "ould"; // �����ҵ�ģʽ

int main() {
    char line[MAXLINE];
    int found = 0;

    while (getline(line, MAXLINE) > 0) {
        //printf("value:%s", line);
        if (strindex(line, pattern) >= 0) {
            printf("%s", line);
            found ++;
        }
    }
    return found;
}

// ���б��浽s�У������ظ��еĳ���
int getline(char s[], int lim){
    int c;
    int i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n') {
        s[i++] = c;
    }
    if (c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

// ����t��s�е�λ�ã���δ�ҵ��򷵻�-1
int strindex(char s[], char t[]) {
    int i, j, k;
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i , k = 0; t[k] != '\0' && s[j] == t[k] ; j++, k++) {
            ;
        }
        if (k > 0 && t[k] == '\0') {
            return i;
        }
    }
    return -1;
}
