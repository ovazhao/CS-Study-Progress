#define BOOK "War and Peace"
#include <stdio.h>

int main(void)
{
    float cost = 12.99;
    float percent = 80.0;
    printf("This copy of \"%s\" sells for $%.2f.\nThat is %.0f%% of list.",BOOK,cost,percent);
    return 0;
}