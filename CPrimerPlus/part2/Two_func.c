#include <stdio.h>

void butler(void); // ����ԭ��

int main(void) {
    printf("I will summon the butler function.\n");
    butler();// ��������
    printf("Yes. Bring me some tea and writeable DVDS.\n");
    return 0;
}

void butler(void) {// ��������
    printf("You rang, sir?\n");
}