#include <stdio.h>

// ��ϰ1-6��֤���ʽgetChar()!=EOF��ֵ��0����1��
// ��ϰ1-7��ӡEOF��ֵ
main() {
    int c;
    c = (getchar() != EOF);
    printf("\ngetchar() != EOF��ֵ:%d", c);

    int eofValue = EOF;
    printf("\nEOF��ֵΪ:%d", eofValue);

    // �������
  /*getchar() != EOF��ֵ:1
    EOF��ֵΪ:-1
  */

}
