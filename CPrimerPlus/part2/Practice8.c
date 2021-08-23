#include <stdio.h>

void one_three();

void two();

// 在C语言中，函数可以调用另一个函数。编写一个程序，调用一个名为one_three()的函数。该函数在一行打印单词“one”，再调用第2个函数two()，然后在另一行打印单词“three”。two()函数在一行显示单词“two”。main()函数在调用one_three()函数前要打印短语“starting now:”，并在调用完毕后显示短语“done!”。
int main() {
    printf("starting now:");
    one_three();
    printf("\ndone!");
    return 0;
}

void one_three() {
    printf("\none");
    two();
    printf("\nthree");
}

void two() {
    printf("\ntwo");
}