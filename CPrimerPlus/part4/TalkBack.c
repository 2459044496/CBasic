#include <stdio.h>
#include <string.h>// �ṩstrlen()����ԭ��

#define DENSITY 62.4// �����ܶ�(��λ����/����Ӣ��)

int main(void) {
    float weight, volume;// weight���� volume���������
    int size, letters;// letter��ĸ
    char name[40];// name��һ��������40���ַ�������

    printf("Hi! What's your first name?\n");
    scanf("%s", name);
    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f", &weight);

    size = sizeof(name);
    letters = strlen(name);
    volume = weight / DENSITY;

    printf("Well, %s, your volume is %2.2f cubic feet.\n", name ,volume);
    printf("Also, your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it.\n", size);

    // Hi! What's your first name?
    // ���룺Cui
    // Cui, what's your weight in pounds?
    // ���룺60
    // Well, Cui, your volume is 0.96 cubic feet.
    // Also, your first name has 3 letters,
    // and we have 40 bytes to store it.
    return 0;
}