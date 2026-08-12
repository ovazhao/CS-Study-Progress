# include<stdio.h>
int main(void)
{
    double secPerYear;
    int age;
    double secInLife;
    secPerYear = 3.156e+07;
    printf("Please tell me your age: ");
    scanf("%d",&age);
    secInLife = age * secPerYear;
    printf("\nYou have lived %f secs.\n", secInLife);
    getchar();
    return 0;
}