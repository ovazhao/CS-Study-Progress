# include <stdio.h>
# define ROWS 3
# define COLS 4
void sum2d(int rows, int cols, int ar[rows][cols]);
int main(void){

    int rs = 3;
    int cs = 10;
    int junk[ROWS][COLS] = {
        {2, 4, 6, 8},
        {3, 5, 7, 9},
        {12, 10, 8, 6}
    };
    int morejunk[2][6] = {
        { 20, 30, 40, 50, 60, 70 },
        { 5, 6, 7, 8, 9, 10 }
    };
    int varr[rs][cs];
    int i, j;
    for (i = 0; i < rs; i++){
        for (j = 0; j < cs; j++){
            varr[i][j] = i*j +j;
        }
    }
    sum2d(ROWS, COLS, junk);
    sum2d(2, 6, morejunk);
    sum2d(rs, cs, varr);
    return 0;
}
void sum2d(int rows, int cols, int ar[rows][cols]){
    int total = 0;
    for (int i = 0; i < rows; i++){
        int sum_row = 0;
        for (int j = 0; j < cols; j++){
            sum_row += ar[i][j];
        }
        total += sum_row;
    }
    printf("Sum of all elements = %d\n", total);
}