#include <stdio.h>

char getChoice(void);
char getFirst(void);
int getInt(void);
void count(void);

// 菜单程序
int main(void) {

    int choice;
    while ((choice = getChoice()) != 'q') {

        switch (choice) {
            case 'a':
                printf("Buy low, sell high.\n");
                break;
            case 'b':
                putchar('\a');
                break;
            default:
                printf("Program error!");
                break;
        }
    }

    printf("Bye.\n");

    return 0;
}

void count(void) {
    int n, i;
    printf("Count how far? Enter an integer:\n");
    n = getInt();
    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
    while (getchar() != '\n') {
        continue;
    }
}

char getChoice(void) {
    int ch;
    printf("Enter the letter of your choice:\n");
    printf("a. advice        b. bell\n");
    printf("c. count         d. quit\n");
    ch = getFirst();

    while ((ch < 'a' || ch >'c') && ch != 'q') {
        printf("Please respond with a, b, c, or q.\n");
        ch = getFirst();
    }
    return ch;
}

char getFirst(void) {
    int ch;
    ch = getchar();
    while (getchar() != '\n') {
        continue;
    }
    return ch;
}

int getInt(void) {
    int input;
    char ch;
    while (scanf("%d", &input) != 1) {
        while ((ch = getchar()) != '\n') {
            putchar(ch);// 处理错误
            printf(" is not an integer.\nPlease enter an integer"
                   " value,such as 25, -178 or 3:");
        }
    }
    return input;
}