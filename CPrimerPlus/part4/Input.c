#include <stdio.h>

// ��ʱʹ��&
int main(void) {
    int age;// ����
    float assets;// ���� assets �ʲ����Ʋ�
    char pet[30];// �ַ����飬���ڴ洢�ַ��� pet ����

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);// ����Ҫʹ��&
    scanf("%s", pet);// �ַ����鲻ʹ��&
    printf("%d $%.2f %s\n", age, assets, pet);
    return 0;
}