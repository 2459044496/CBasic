#include <stdio.h>
#include <string.h>

int main(void) {

    // 编程练习5．编写一个程序，提示用户输入以兆位每秒（Mb/s）为单位的下载速度和以兆字节（MB）为单位的文件大小。
    // 程序中应计算文件的下载时间。注意，这里1字节等于8位。使用float类型，并用/作为除号。
    // 该程序要以下面的格式打印3个变量的值（下载速度、文件大小和下载时间），显示小数点后面两位数字：
    float megabitsPerSecond;// 以兆位每秒（Mb/s）为单位的下载速度
    float megabits;// 以兆字节（MB）为单位的文件大小
    printf("Enter megabitsPerSecond and megabits:");
    scanf("%f %f", &megabitsPerSecond, &megabits);
    printf("At %2.2f megabits per second,a file of %1.2f megabits\n"
           "downloads in %1.2f seconds", megabitsPerSecond, megabits, megabits * 8 / megabitsPerSecond);

    // Enter megabitsPerSecond and megabits:18.12 2.20
    // At 18.12 megabits per second,a file of 2.20 megabits
    // downloads in 0.97 seconds

    // 编程练习6．编写一个程序，先提示用户输入名，然后提示用户输入姓。在一行打印用户输入的名和姓，
    // 下一行分别打印名和姓的字母数。字母数要与相应名和姓的结尾对齐，如下所示：
    char firstName[20];
    char secondName[20];
    printf("Please enter your first name:");
    scanf("%s", firstName);
    printf("Please enter your second name:");
    scanf("%s", secondName);

    printf("%s%s\n%*d%*d", firstName, secondName, strlen(firstName),
           strlen(firstName), strlen(secondName), strlen(secondName));
    printf("\n%s%s\n%-*d%-*d", firstName, secondName, strlen(firstName),
           strlen(firstName), strlen(secondName), strlen(secondName));
    // Please enter your first name:Melissa
    // Please enter your second name:Honeybee
    // MelissaHoneybee
    //       7       8
    // MelissaHoneybee
    // 7      8
    return 0;
}