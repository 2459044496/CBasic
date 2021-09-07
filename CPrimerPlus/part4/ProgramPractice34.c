#include <stdio.h>

int main(void) {

    // 编程练习3．编写一个程序，读取一个浮点数，首先以小数点记数法打印，然后以指数记数法打印。
    // 用下面的格式进行输出（系统不同，指数记数法显示的位数可能不同）：
    // The input is 21.3 or 2.1e+001.
    // The input is +21.290 or 2.129E+001
    float float1;
    printf("Enter a float value:");
    scanf("%f", &float1);
    printf("The input is %2.1f or %.1e", float1, float1);
    float float2;
    printf("\nEnter a float value again:");
    scanf("%f", &float2);
    printf("The input is %+2.3f or %.3E", float2, float2);


    // 编程练习4．编写一个程序，提示用户输入身高（单位：英寸）和姓名，
    // 然后以下面的格式显示用户刚输入的信息：
    char name[20];
    float height;
    printf("\nPlease enter your name and height:");
    scanf("%s %f", name, &height);
    printf("%s,you are %1.3f feet tall", name, height);
    printf("\n%s,you are %1.3f meter tall", name, height / 100);


    // Enter a float value:21.3
    // The input is 21.3 or 2.1e+001
    // Enter a float value again:21.290
    // The input is +21.290 or 2.129E+001
    // Please enter your name and height:cuipai 170
    // cuipai,you are 170.000 feet tall
    // cuipai,you are 1.700 meter tall
    return 0;
}