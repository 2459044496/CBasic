#include <stdio.h>

// ��ϰ1-9    ��дһ�������븴�Ƶ�����ĳ��򣬲������������Ķ���ո���һ���ո���档
main() {

    int c;
    int pc = EOF; // prev ��һ���ַ�

    while ((c = getchar()) != EOF) {
        // �����һ���ַ��͵�ǰ�ַ������ǿո����
        if (c != ' ') {
            putchar(c);
        } else if (pc != ' ') {
            putchar(c);
        }
        // ����ǰ�ַ���ֵ��pc
        pc = c;
    }

}
