#include <stdio.h>

// 练习1-3在转换表顶部打印一个标题
// 联系1-4打印摄氏温度与华氏温度的对照表
main() {
    float fahr; // 华氏温度
    float celsius; // 摄氏温度

    int lower = 0; // 最低温度
    int upper = 300; // 最高温度
    int step = 20; // 步长

    fahr = celsius;
    printf("摄氏温度\t\t华氏温度\n");
    while (celsius <= upper) {
        fahr = 9.0 * celsius / 5.0 + 32.0;
        printf("%4.1f\t%8.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    // 程序部分输出
  /*摄氏温度	华氏温度
    0.0	    32.0
    20.0	    68.0
    40.0	   104.0
    60.0	   140.0
    80.0	   176.0
    100.0	   212.0
    120.0	   248.0
    140.0	   284.0
    160.0	   320.0
    180.0	   356.0
    200.0	   392.0
    220.0	   428.0
    240.0	   464.0
    260.0	   500.0
    280.0	   536.0
    300.0	   572.0
  */

}