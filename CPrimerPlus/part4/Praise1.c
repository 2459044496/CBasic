#include <stdio.h>

#define PRAISE "You are an extraordinary being."

int main(void) {
    char name[40];

    printf("What's your name?");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name ,PRAISE);

    // What's your name?Cui Pai
    // Hello, Cui. You are an extraordinary being.

    // scanf()ֻ��ȡ��Cui Pai�е�Cui������������1���հף��ո��Ʊ�����з���ʱ�Ͳ��ٶ�ȡ���롣
    // ��ˣ�scanf()�ڶ���Cui��Pai֮��Ŀո�ʱ��ֹͣ�ˡ�һ����ԣ�����%sת��˵����
    // scanf()ֻ���ȡ�ַ����е�һ�����ʣ�������һ���䡣
    // C���Ի������������뺯�����磬fgets()�������ڶ�ȡһ���ַ�����
    return 0;
}