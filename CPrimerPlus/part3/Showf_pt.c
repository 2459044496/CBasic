#include <stdio.h>

// 	printf()函数使用%f转换说明打印十进制记数法的float和double类型浮点数，
// 	用%e打印指数记数法的浮点数。如果系统支持十六进制格式的浮点数，可用a和A分别代替e和E。
// 	打印long double类型要使用%Lf、%Le或%La转换说明。
int main(void) {
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;
    printf("%f can be writeen %e\n", aboat, aboat);
    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
    printf("%f can be writeen %e\n", abet, abet);
    printf("%Lf can be writeen %Le\n", dip, dip);

    // 32000.000000 can be writeen 3.200000e+004
    // And it's 0x1.f40000p+14 in hexadecimal, powers of 2 notation
    // 2140000000.000000 can be writeen 2.140000e+009
    // 0.000000 can be writeen 3.205261e-317

    // 一个上溢（overflow）的示例。
    float toobig= 3.4E38 * 100.0f;
    printf("%e\n",toobig);
    // 1.#INF00e+000
    // 在这种情况下会给toobig赋一个表示无穷大的特定值，而且printf()显示该值为inf或infinity（或者具有无穷含义的其他内容）。


    return 0;
} 