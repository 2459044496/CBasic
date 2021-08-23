// 第二章
// 2.4 声明
/*
 * 所有变量都必须先声明后使用，尽管某些变量可以通过上下文隐式地声明。
 * 一个声明指定一种变量类型，后面所带的变量表可以包含一个或多个该类型的变量。
 * int lower, upper, step;
 * char c, line[1000];
 *
 * 一个声明语句中的多个变量可以拆开在多个声明语句中声明。上面的可以写成以下形式：
 * int lower;
 * int upper;
 * int step;
 * char c;
 * char line[1000];
 *
 * 还可以在声明的同时对变量进行初始化，后面紧跟一个等号以及一个表达式。
 * char esc = '\\';
 * int i = 0;
 * int limit = MAXLINE + 1;
 * float eps = 1.0e - 5;
 *
 * 如果变量不是自动变量，则只能进行一次初始化操作。
 * 默认情况下，外部变量与静态变量将被初始化为0.未经显式初始化的自动变量的值为未定义值（即无效值）。
 *
 * 任何变量的声明都可以使用const限定符限定。该限定符指定变量的值不能被修改。
 * 对数组而言，const限定符指定数组所有元素的值都不能被修改。
 * const double e = 2.71828;
 * const char msg[] = "waring: ";
 *
 * */

int main() {
    // 声明
    int lower, upper, step;
    char c, line[1000];

    // 声明
    int lower;
    int upper;
    int step;
    char c;
    char line[1000];

    // 初始化时初始化
    char esc = '\\';
    int i = 0;
    int limit = MAXLINE + 1;
    float eps = 1.0e - 5;

    // 常量
    const double e = 2.71828;
    const char msg[] = "waring: ";

    return 0;
}