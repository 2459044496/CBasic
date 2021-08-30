#include <stdio.h>
#include <stdint.h>

int main() {
    float toobig = 3.4E38*100.0f;
    printf("%e\n", toobig);
    int chValue;
    printf("请输入一个ASCII码值:");
    scanf("%d", &chValue);
    printf("\n码值转换成数字为:%c", chValue);

    printf("\n\aStartled by the sudden sound, Sally shouted,\n\"By the Great Pumpkin,what was that!\"");

    float floatValue;
    printf("\nEnter a floating-point value:");
    scanf("%f", &floatValue);
    printf("\nfixed-point notation:%f", floatValue);
    printf("\nexponential notation:%e", floatValue);
    printf("\np notation:%a", floatValue);

    double seconds = 3.156E7;
    int years;
    printf("\nEnter your years:");
    scanf("%d", &years);
    printf("\nyour seconds is%.0f", seconds * years);

    double fenzi = 3.0E-8;
    int kuatuo;
    printf("\nEnter your kuotuo value:");
    scanf("%d", &kuatuo);
    printf("\nyour fenzi number is%f", kuatuo * 950 / fenzi);

    float inch = 2.54f;
    int cm;
    printf("\nEnter cm value:");
    scanf("%d", &cm);
    printf("\ninch value is%.2f", cm * inch);


    return 0;
}