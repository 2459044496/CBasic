// ��һ��
// 1.10 �ⲿ������������
/*
 * �Զ�����==�ֲ�����
 *
 * �ⲿ�������붨�������к���֮�⣬��ֻ�ܶ���һ�Σ������������Ϊ������洢��Ԫ��
 * ��ÿ����Ҫ�����ⲿ�����ĺ����У�����������Ӧ���ⲿ��������ʱ˵�������͡�
 * ����ʱ������extern�����ʽ������Ҳ����ͨ����������ʽ������
 *
 * extern   �ⲿ���ⲿ����
 *
 * */
#include <stdio.h>

#define MAXLINE 1000 // ���������е���󳤶�

int max; // ĿǰΪֹ���ֵ���еĳ���
char line[MAXLINE]; // ��ǰ��������
char longest[MAXLINE]; // ���ڱ��������

/*
 * Ϊ�����ϰ汾��C���Գ�����ݣ�ANSIC���԰ѿղ��������ϰ汾C���Ե�������ʽ�����ҶԲ������ٽ����κμ�顣
 * ��ANSI C�У����Ҫ�����ղ����������ʹ�ùؼ���void������ʽ������
 * */
int getline(void); // �������
void copy(void);


// ��ӡ�����У��ر�汾
main() {

    int len; // ��ǰ�г���
    extern int max;
    extern char longest[];

    max = 0;

    while ((len = getline()) > 0) {
        if (len > max) {
            max = len;
            copy();
        }
    }

    if (max > 0) { // ������������
        printf("%s", longest);
    }

    return 0;
}

// getline��������һ�ж���s�в������䳤�ȣ��ر�汾
int getline(void) {
    int c;
    int i;

    extern char line[];

    for (i = 0; i <MAXLINE-1 && (c=getchar()) != EOF && c != '\n' ; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

// copy��������form���Ƶ�to������ٶ�to�㹻���ر�汾
void copy(void) {
    int i;

    extern char line[];
    extern char longest[];

    i = 0;

    while ((longest[i] = line[i]) != '\0') {
        ++i;
    }

}
