#include <stdio.h>

int main() {
    // 编写一个程序，调用一次printf()函数，把你的名和姓打印在一行。再调用一次printf()函数，把你的名和姓分别打印在两行。然后，再调用两次printf()函数，把你的名和姓打印在一行。输出应如下所示（当然要把示例的内容换成你的名字）：
    printf("Cui Pai\n");
    printf("Cui\nPai\n");
    printf("Cui ");
    printf("Pai");

    // 编写一个程序，打印你的姓名和地址。
    printf("\nMy name is CuiPai,My address is shanghai");

    // 编写一个程序把你的年龄转换成天数，并显示这两个值。这里不用考虑闰年的问题。
    int myAge = 18;
    int myDays = 18 * 365;
    printf("\nMy age is %d,My days is %d。",myAge, myDays);
}