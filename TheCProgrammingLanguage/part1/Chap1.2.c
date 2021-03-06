// 第一章
// 1.2变量与算术表达式

#include <stdio.h>

// 当fath=0, 20, ..., 300时，分别打印华氏温度与摄氏温度的对照表
main() {
    // int类型通常为16位，取值范围为-32768~+32767
    int fahr; // 华氏温度
    int celsius; // 摄氏温度

    int lower = 0; // 最低温度
    int upper = 300; // 最高温度
    int step = 20; // 步长

    fahr = celsius;
    while (fahr <= upper) {
        /*
         * 以下之所以把表达式写成先乘5然后在除以9而不是直接写成5/9,
         * 其原因是在C语言及许多其他语言中，整数除法操作将执行舍位。
         * 结果中的任何小数部分都会被舍弃。(在Java中也是的，已验证)
         * 由于5和9都是整数，5/9后经过截取所得的结果为0，所以所有摄氏温度都为0.
         * */
        celsius = 5 * (fahr-32) / 9;
        // celsius = (5/9) * (fahr-32);
        /*
         * printf是一个通用大的输出格式化函数。
         * printf函数的第一个参数中的各个%分别对应与第二个参数、第三个参数，。。。他们在数目和类型上都必须匹配。
         * printf函数不是C语言本身的一部分，C语言本身并没有并以输入/输出功能。
         * */
        //printf("华氏温度%d\t摄氏温度%d\n", fahr, celsius);

        //printf("%d\t%d\n", fahr, celsius);

        // 上面的printf函数，由于输出的数不是右对齐的，所以i输出不是很美观。
        // 如果在printf语句的第一个参数的%d中指明打印宽度，则打印的数字会在打印区域内右对齐。
        printf("%3d\t%6d\n", fahr, celsius);

        fahr = fahr + step;
    }

    // 程序部分输出
  /*华氏温度0	摄氏温度-17
    华氏温度20	摄氏温度-6
    华氏温度40	摄氏温度4
    华氏温度60	摄氏温度15
    华氏温度80	摄氏温度26
  */

}