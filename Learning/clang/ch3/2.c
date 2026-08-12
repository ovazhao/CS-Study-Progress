# include<stdio.h>
int main(void)
{
    double fvalue;
    printf("Enter a floating-point value:\n");
    scanf("%lf",&fvalue);

    printf("exponential notation:%e\n",fvalue);
    printf("float-point notation:%f",fvalue);
    getchar();
    return 0;
}