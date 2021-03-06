// 第二章
// 2.3 常量
/*
 * 类似于1 2 3 4的整数常量属于int类型。
 * long类型的常量以字母l或L结尾，如123456789L。
 * 如果一个整数太大以至于无法用int表示，也将被当作long类型处理。
 * 无符号常量以字母u或U结尾。
 * 后缀ul或UL表明是unsigned long类型。
 *
 * 浮点数常量中包含一个小数点（如123.4）或一个指数（如1e-2），也可以两者都有。
 * 没有后缀的浮点数常量为double类型。
 * 后缀f或F结尾表示float类型，而后缀l或L则表示long double类型。
 *
 * 整型数除了用十进制表示外，还可以用八进制或十六进制表示。带前缀0的整型常量表示
 * 它为八进制；前缀为0x或0X，则表示它为十六进制。例如，十进制31可以写成八进制
 * 形式037，也可以写成十六进制形式0x1f或0X1F。
 * 八进制与十六进制的常量也可以使用后缀L表示long类型，使用后缀U表示unsigned类型。
 * 例如，0XFUL是一个unsigned long类型（无符号长整型）的常量，其值等于十进制15。
 *
 * 一个字符常量是一个整数，书写时将一个字符括在单引号中，如‘x’。
 * 字符在机器字符集中的数值就是字符常量的值。例如，在ASCII字符集中，字符‘0’的值为48，
 * 它与数值0没有关系。如果用字符‘0’代替这个与具体字符集有关的值（比如48），那么，程序
 * 就无须关心该字符的具体值，增加了程序的易读性。
 * 字符常量一般用来与其他字符进行比较，但也可以像其他整数一样参与数值运算。
 *
 * 某些字符可以通过转义字符序列（例如，换行符\n）表示为字符和字符串常量。转义字符看起来
 * 像两个字符，但指标是一个字符。
 * 另外，可以用 '\ooo' 表示任意的字节大小的位模式。其中，ooo代表1~3个八进制数字（0~7）.
 * 这种位模式还可以用 '\xhh' 表示，其中，hh是一个或多个十六进制数字（0~9，a~f，A~F）。
 * 因此，可以按照下列形式书写语句：
 * #define VTAB '\013'  // ASCII纵向制表符
 * #define BELL '\007'  // ASCII响铃符
 * 上述语句也可以用十六进制的形式书写为：
 * #define VTAB '\xb'  // ASCII纵向制表符
 * #define BELL '\x7'  // ASCII响铃符
 *
 * ANSI C语言中的全部转义字符序列如下所示：
 * \a   响铃符     \\  反斜杠
 * \b   回退符     \?  问号
 * \f   换页符     \'  单引号
 * \n   换行符     \"  双引号
 * \r   回车符     \ooo八进制数
 * \t   横向制表符  \xhh十六进制数
 * \v   纵向制表符
 *
 * 字符常量'\0'表示值为0的字符，也就是空字符（null）。
 * 通常用'\0'的形式替代0，以强调某些表达式的字符属性，但其数字值为0。
 *
 * 常量表达式是仅仅包含常量的表达式。这种表达式在编译时求值，而不再运行时求值。
 * 它可以出现在常量可以出现的任何位置，例如：
 * #define MAXLINE 1000
 * char line [MAXLINE];
 * #define LEAP 1 // 闰年
 * int days[31+28+LEAP+31+30+31+30+31+31+30+31+30+31];
 * 字符串常量也叫字符串字面值，使用双引号括起来的0个或多个字符组成的字符序列。
 * 例如： "I am a string" 或 "" //空字符串
 * 都是字符串。双引号不是字符串的一部分，它只用于字符串。字符常量中使用的转义字符序列
 * 同样可以用在字符串中。在字符串中使用\"表示双引号字符串。编译时可以将多个字符串常量
 * 连接起来，例如，下列形式：
 * “Hello，” “world”
 * 等价于
 * “Hello， world”
 *
 * 从技术角度看，字符串常量就是字符数组。字符串的内部表示使用一个空字符'\0'作为串的结尾，
 * 因此，存储字符串的物理单元数比括在双引号中的字符数多一个。这种表示方法也说明，C语言对
 * 字符串的长度没有限制，但程序必须扫描完整个字符串后才能确定字符串的长度。标准库函数
 * strlen（s）可以返回字符串参数s的长度，但长度不包括末尾的'\0'。
 * 标准头文件<string.h>中声明了strlen和其他字符串函数。
 *
 * 字符常量与仅包含一个字符的字符串之间的区别：‘x’与“x”是不同的。
 * 前者是一个整数，其值是字母x在机器字符集中对应的数值（内部表示值）；
 * 后者是一个包含一个字符（即字母x）以及一个结束符'\0'的字符数组。
 *
 * 枚举常量是另外一种类型的常量。枚举是一个常量整型值的列表，例如：
 * enum boolean {NO, YES};
 * 在没有显示说明的情况下，enum类型中第一个枚举名的值为0，第二个为1，以此类推。
 * 如果只指定了部分枚举名的值，那么未指定值的枚举名的值将依着最后一个指定值向后递增，
 * 参看以下两个例子中的第二个例子：
 * enum escapes {
 *    BELL = '\a', BACKSPACE = '\b'
 * };
 *
 * enum months {
 *      JAN = 1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC
 * };
 * // FEB的值为2，MAR的值为3，依此类推。
 *
 * 枚举为建立常量值与名字之间的关联提供了一种便利的方式。相对于#define语句来说，
 * 它的优势在于常量值可以自动生成。
 *
 * */

#include <stdio.h>
//#include <string.h>

#define oNumber 012 // 八进制数，以0开头
#define xNumber 0X12 // 十六进制数，以0x或0X开头
#define testNumber 0XFUL // 一个unsigned long类型（无符号长整型）的常量
#define char0 '0' // 字符 '0'
#define oVTAB '\013'
#define xVTAB '\xb'
#define te0 '\0'

// 常量表达式
#define MAXLINE 1000
char line [MAXLINE];
#define LEAP 1 // 闰年
int days[31+28+LEAP+31+30+31+30+31+31+30+31+30+31];

int strlen(char s[]);

int main() {

    printf("八进制数012转十进制:%d\n", oNumber);
    printf("十六进制数0X12转十进制:%d\n", xNumber);
    printf("0XFUL转十进制:%d\n", testNumber);
    printf("字符‘0’转十进制:%d\n", char0);

    printf("oVTAB转十进制:%d\n", oVTAB);
    printf("xVTAB转十进制:%d\n", xVTAB);

    printf("\\0转十进制:%d\n", te0);

    char char1 = '\a'; // \a 响铃符
    printf("char1响铃符转十进制:%d\n", char1);


    int num = 12;
    printf("8进制表示12,%o\n", num);
    printf("16进制表示12,%x\n", num);

    char s[] = "123456\0";
    printf("长度:%d", strlen(s));

  /*  程序输出
    八进制数012转十进制:10
    十六进制数0X12转十进制:18
    0XFUL转十进制:15
    字符‘0’转十进制:48
    oVTAB转十进制:11
    xVTAB转十进制:11
    \0转十进制:0
    char1响铃符转十进制:7
    8进制表示12,14
    16进制表示12,c
    长度:6
    */

    return 0;
}

int strlen(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        ++i;
    }
    return i;
}