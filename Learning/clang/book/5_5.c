# include<stdio.h>

int main(void)
{
    char ch;
    int i;
    float fl;

    fl = i = ch ='C';
    printf("char is %c, int is %d, float is %2.2f\n", ch, i, fl);
    ch++;
    i = fl + 2 * ch;
    fl = 2.0 * ch + i;

    printf("char is %c, int is %d, float is %2.2f\n", ch, i, fl);

    return 0;
    
}