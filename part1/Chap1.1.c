// ��һ��
// 1.1����

// ������׼�����Ϣ
#include <stdio.h>

// ����Ϊmain�ĺ������������ܲ���ֵ   main��������䶼�����ڻ�������
main() {
    //  main�������ÿ⺯��printf����ʾ�ַ����У�
    // \n��ʾ���з�
    printf("hello, world\n");

    // ����Ļ��з�ʽ�Ǵ����,printf������Զ�����Զ�����
    //printf("hello, world
    //       ");

    // ����д��������ʽ
    printf("hello, ");
    printf("world");
    printf("\n");

    // \n ���з�
    printf("hello, world\n");
    // \t �Ʊ��
    printf("hello, world\t");
    // \b ���˷�
    printf("hello, world\b");
    // \" ˫����
    printf("hello, world\"");
    // \\ ��б�ܱ���
    printf("hello, world\\");

    // ������
  /*hello, world
    hello, world
    hello, world
    hello, world	hello, worlhello, world"hello, world\
  */

   // ��ϰ1-2,��printf�����Ĳ����ַ����а���\c������c�������ת���ַ�������δ���г���ĳ���ַ���ʱ���۲�һ�»����ʲô���
    // \c
    printf("\nhello, world\c");
    // ������
  /*
    hello, worldc
   */
}