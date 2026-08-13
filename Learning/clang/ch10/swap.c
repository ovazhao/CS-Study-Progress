#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int x = 5;
    int y = 10;
    printf("x = %d, y = %d",x,y);
    swap(&x,&y);
    printf("x = %d, y = %d",x,y);
    return 0;
}
void swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}