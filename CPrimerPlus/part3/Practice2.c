#include <stdio.h>

// 每年的秒数
#define SECONDSFORYEAY 3.156e7

int main() {
    // 编程练习2：编写一个程序，要求提示输入一个ASCII码值（如，66），然后打印输入的字符。
    int asciiCode;
    printf("Enter a ascii code:");
    scanf("%d", &asciiCode);
    printf("Your enter value is %d,in ascii code is %c", asciiCode, asciiCode);

    // 编程练习3：编写一个程序，发出一声警报，然后打印下面的文本：
    printf("\n\aStartled by the sudden sound, Sally shouted,\n\"By the Great Pumpkin,what was that!\"");

    // 编程练习4：编写一个程序，读取一个浮点数，先打印成小数点形式，再打印成指数形式。
    // 然后，如果系统支持，再打印成p记数法（即十六进制记数法）。
    // 按以下格式输出（实际显示的指数位数因系统而异）：
    float fValue;
    printf("\nEnter a floating-point value:");
    scanf("%f", &fValue);
    printf("\nfixed-point notation:%.6f", fValue);
    printf("\nexponential notation:%e", fValue);
    printf("\np notation:%a", fValue);

    // 编程练习5：一年大约有3.156×10的7次方秒。编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数。
    int yourAge;
    printf("\nPlease enter you age:");
    scanf("%d", &yourAge);
    printf("Your age convert seconds is%f", yourAge * SECONDSFORYEAY);

    return 0;
}