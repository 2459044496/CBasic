#include <stdio.h>

void display(char ch, int lines, int width);

// ��ָ�������д�ӡ�ַ�
int main(void){

    int ch;// ����ӡ�ַ�
    int rows, cols;// ����������

    printf("Enter a character and two integers:\n");

    while ((ch = getchar()) != '\n') {
        if (scanf("%d %d", &rows, &cols) != 2) {
            break;
        }
        display(ch , rows, cols);
        while (getchar() != '\n') {
            continue;
        }
        printf("Enter another character and two integers;\n");
        printf("Enter a newline to quit.\n");
    }

    printf("Bye.\n");

    // Enter a character and two integers:
    // c 6 6
    // cccccc
    // cccccc
    // cccccc
    // cccccc
    // cccccc
    // cccccc
    // Enter another character and two integers;
    // Enter a newline to quit.
    //
    // sf
    // Bye.
    return 0;
}

void display(char ch, int lines, int width) {
    int row, col;
    for (row = 1; row <= lines; row++) {
        for (col = 1; col <= width; col++) {
            putchar(ch);
        }
        putchar('\n');
    }
}
