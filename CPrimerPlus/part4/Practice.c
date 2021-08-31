#include <stdio.h>
#include <string.h>
#include <float.h>

#define SIZE 10

const int si = 3;

int main(void) {
    int a = 100;
    char char2[100];
    char2[1] = 20;
    char2[3] = 20;
    printf("Hello World!");
    char ch1[SIZE];
    printf("\n please enter a string:");
    scanf("%s", ch1);
    for (int i = 0; i < SIZE; i++) {
        printf("\n name:%c", ch1[i]);
    }

    char firstName[SIZE];// 姓
    char lastName[SIZE];// 名

    printf("\nPlease enter your firstName:");
    scanf("%s", firstName);
    printf("Please enter your lastName:");
    scanf("%s", lastName);
    for (int i = 0; i < strlen(firstName); i++) {
        printf("%c", lastName[i]);
    }
    printf(".");
    for (int i = 0; i < strlen(firstName); i++) {
        printf("%c", firstName[i]);
    }

    printf("\n1,打印名字，包括双引号\n");
    printf("\"%s\"", lastName);
    printf(".");
    printf("\"%s\"", firstName);

    printf("\n2,在宽度为20的字段右端打印名字，包括双引号\n");
    printf("\"%20s\"", lastName);
    printf(".");
    printf("\"%20s\"", firstName);

    printf("\n3,在宽度为20的字段左端打印名字，包括双引号\n");
    printf("\"%-20s\"", lastName);
    printf(".");
    printf("\"%-20s\"", firstName);

    printf("\n4,在比姓名宽度宽3的字段中打印姓名\n");
    printf("\"%*s\"", strlen(firstName) + 3, lastName);
    printf(".");
    printf("\"%*s\"", strlen(firstName) + 3, firstName);

    float floatValue1;

    printf("\nPlease enter a float value:");
    scanf("%f", &floatValue1);

    printf("\n%f", floatValue1);
    printf("\n%e", floatValue1);

    char userName[100];
    float height;
    printf("\nPlease enter your name:");
    scanf("%s", userName);
    printf("\nPlease enter your height:");
    scanf("%f", &height);

    printf("%s,yor are %1.3f feet tall", userName, height);


    getchar();
    getchar();
    getchar();


    return 0;
}