#include <stdio.h>

#define ROWS 3
#define COLS 4

void sumRows(int ar[][COLS], int rows);
void sumCols(int [][COLS], int);
int sum2d(int(*ar)[COLS], int rows);

// 处理二维数组的函数
int main() {

    int junk[ROWS][COLS] = {
            {2, 4, 6, 8},
            {3, 5, 7, 9},
            {12, 10, 8, 6}
    };

    sumRows(junk, ROWS);
    sumCols(junk, ROWS);

    printf("Sum of all elements = %d\n", sum2d(junk, ROWS));

    return 0;
}

void sumRows(int ar[][COLS], int rows) {
    int r;
    int c;
    int tot;
    for (r = 0; r < rows; r++) {
        tot = 0;
        for (c = 0; c < COLS; c++) {
            tot += ar[r][c];
        }
        printf("row %d: sum =%d\n", r, tot);
    }
}

void sumCols(int ar[][COLS], int rows) {
    int r;
    int c;
    int tot;
    for (c = 0; c < COLS; c++) {
        tot = 0;
        for (r = 0; r < rows; r++) {
            tot += ar[r][c];
        }
        printf("col %d: sum =%d\n", r, tot);
    }
}

int sum2d(int ar[][COLS], int rows) {
    int r;
    int c;
    int tot = 0;
    for (r = 0; r < rows; r++) {
        for (c = 0; c < COLS; c++) {
            tot += ar[r][c];
        }
    }
    return tot;
}

