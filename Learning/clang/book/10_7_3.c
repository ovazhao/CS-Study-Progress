#include <stdio.h>
# define ROWS 3
# define COLS 4
/*三种等价的 二维数组当函数形参 原型语法*/
void sum_rows(int ar[][COLS], int rows);
void sum_cols(int (*ar)[COLS], int rows);
void sum2d(int [][COLS], int);
int main(void){
    int junk[ROWS][COLS] = {
    {2, 4, 6, 8},
    {3, 5, 7, 9},
    {12, 10, 8, 6}
    };

    sum_rows(junk, ROWS);
    sum_cols(junk, ROWS);
    sum2d(junk, ROWS);

    return 0;
}

void sum_rows(int ar[][COLS], int rows){
    for (int i = 0; i < rows; i++){
        int sum_row = 0;
        for (int j = 0; j < COLS; j++){
            sum_row += ar[i][j];
        }
        printf("row %d: sum = %d\n",i, sum_row);
        sum_row = 0;
    }
}

void sum_cols(int (*ar)[COLS], int rows){
    for (int i = 0; i < COLS; i++){
        int sum_col = 0;
        for (int j = 0; j < rows; j++){
            sum_col += ar[j][i];
        }
        printf("col %d: sum = %d\n",i, sum_col);
        sum_col = 0;
    }
}

void sum2d(int ar[ROWS][COLS], int rows){
    int total = 0;
    for (int i = 0; i < COLS; i++){
        int sum_col = 0;
        for (int j = 0; j < rows; j++){
            sum_col += ar[j][i];
        }
        total += sum_col;
    }
    printf("Sum of all elements = %d", total);
}
