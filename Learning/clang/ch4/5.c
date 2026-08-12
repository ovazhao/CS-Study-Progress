#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[10];
    char last[10];
    int numOfFirst;
    int numOfLast;
    printf("first name?\n");
    scanf("%s",first);
    numOfFirst = strlen(first);
    printf("last name?\n");
    scanf("%s",last);
    numOfLast = strlen(last);
    printf("%s %s\n",first,last);
    printf("%-*d %-*d", numOfFirst, numOfFirst, numOfLast, numOfLast);
    getchar();
    return 0;

}