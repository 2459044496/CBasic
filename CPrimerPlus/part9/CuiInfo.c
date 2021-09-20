#include <stdio.h>
#include "CuiInfo.h"

// 多文件编译和头文件
int main(void) {
    printfInfo();
    return 0;
}

void printfInfo() {
    printf("name is %s,age is %d", NAME, AGE);
}
