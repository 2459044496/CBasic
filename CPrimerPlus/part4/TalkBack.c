#include <stdio.h>
#include <string.h>// 提供strlen()函数原型

#define DENSITY 62.4// 人体密度(单位：磅/立方英尺)

int main(void) {
    float weight, volume;// weight重量 volume体积，音量
    int size, letters;// letter字母
    char name[40];// name是一个可容纳40个字符的数组

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
    // 输入：Cui
    // Cui, what's your weight in pounds?
    // 输入：60
    // Well, Cui, your volume is 0.96 cubic feet.
    // Also, your first name has 3 letters,
    // and we have 40 bytes to store it.
    return 0;
}