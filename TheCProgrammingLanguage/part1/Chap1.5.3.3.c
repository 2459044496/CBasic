#include <stdio.h>

// ��ϰ1-10    ��дһ�������븴�Ƶ�����ĳ��򣬲��������������Ʊ���滻Ϊ\t�������˷��滻Ϊ\b,
// ����б���滻Ϊ\\���������Խ��Ʊ���ͻ��˷��Կɼ��ķ�ʽ��ʾ������
main() {

    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar("\\t");
        } else if (c == '\b') {
            putchar("\\b");
        } else if (c == '\\') {
            putchar("\\\\");
        } else {
            putchar(c);
        }
    }

}
