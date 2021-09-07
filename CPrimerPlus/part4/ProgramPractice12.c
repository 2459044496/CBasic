#include <stdio.h>
#include <string.h>

int main(void) {

    // 编程练习1．编写一个程序，提示用户输入名和姓，然后以“名,姓”的格式打印出来。
    char firstName[20];
    char secondName[20];
    printf("Please enter your first name:");
    scanf("%s", firstName);
    printf("Please enter your second name:");
    scanf("%s", secondName);
    printf("%s,%s", secondName, firstName);


    // 编程练习2：编写一个程序，提示用户输入名字，并执行以下操作
    // a．打印名字，包括双引号；
    // b．在宽度为20的字段右端打印名字，包括双引号；
    // c．在宽度为20的字段左端打印名字，包括双引号；
    // d．在比姓名宽度宽3的字段中打印名字。
    char name[20];
    printf("Please Enter your name:");
    scanf("%s", name);
    printf("\n\"%s\"", name);
    printf("\n\"%20s\"", name);
    printf("\n\"%-20s\"", name);
    printf("\n%*s", strlen(name) + 3 ,name);

    // Please enter your first name:cui
    // Please enter your second name:pai
    // pai,cuiPlease Enter your name:cuipai
    //
    // "cuipai"
    // "              cuipai"
    // "cuipai              "
    //    cuipai
    return 0;
}