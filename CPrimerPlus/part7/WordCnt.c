#include <stdio.h>
#include <ctype.h>// Ϊisspace()�����ṩԭ��
#include <stdbool.h>// Ϊbool��true��false�ṩ����

#define STOP '|'

// ͳ���ַ�����������������
// ��������������հ�ʱ���������⡣�ڰ���������
int main(void){

    char c;// �����ַ�
    char prev;// �����ǰһ���ַ�
    long n_chars = 0L;// �ַ���
    int n_lines = 0;// ����
    int n_words = 0;// ������
    int p_lines = 0;// ������������
    bool inWord = false;// ���c�ڵ����У�inWord����true

    printf("Enter text to be analyzed(| to terminate):\n");
    prev = '\n';// ����ʶ����������

    while ((c = getchar()) != STOP) {
        n_chars++;// ͳ���ַ�
        if(c == '\n') {
            n_lines++;// ͳ����
        }
        if(!isspace(c) && !inWord) {
            inWord = true;// ��ʼһ���µĵ���
            n_words++;// ͳ�Ƶ���
        }
        if(isspace(c) && inWord) {
            inWord = false;// �ﵽ���ʵ�ĩβ
        }
        prev = c;
    }

    if(prev != '\n') {
        p_lines = 1;
    }

    printf("characters = %ld,words = %d, lines = %d, ", n_chars, n_words, n_lines);
    printf("partial lines = %d\n", p_lines);

    return 0;
}
