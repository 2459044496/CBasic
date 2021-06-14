// ��һ��
// 1.9 �ַ�����
/*
 * getline�������ַ�'\0'�������ַ�����ֵΪ0�����뵽�������������ĩβ���Ա���ַ����Ľ�����
 * ��һԼ���ѱ�C���Բ��ã�����C�����г���������
 * "hello\n"
 * ���ַ�������ʱ���������ַ��������ʽ�洢������ĸ�Ԫ�طֱ�洢�ڸ����ַ�������'\0'����ַ����Ľ�����
 * h    e   l   l   o   \n  \0
 * printf�����еĸ�ʽ˵��%s�涨����Ӧ�Ĳ�����������������ʽ��ʾ���ַ�����
 * copy������ʵ���������������������'\0'������һ��ʵ������'\0'��������������С�
 * */
#include <stdio.h>

#define MAXLINE 1000 // ���������е���󳤶�

int getline(char line[], int maxline); // �������
void copy(char to[], char from[]);


// ��ӡ������
main() {

    int len; // ��ǰ�г���
    int max = 0; // ĿǰΪֹ���ֵ���еĳ���
    char line[MAXLINE]; // ��ǰ��������
    char longest[MAXLINE]; // ���ڱ��������

    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) { // ������������
        printf("%s", longest);
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

// copy��������form���Ƶ�to������ٶ�to�㹻��
void copy(char to[], char from[]) {
    int i = 0;

    while ((to[i] = from[i]) != '\0') {
        ++i;
    }

}
