# include <stdio.h>
# include <math.h>

int main(void)
{
    float principle = 0;
    float rate = 0;
    int year = 0;
    int compoundTime = 0;
    float totalcost = 0.0;
    printf("Compound Interest Calculator");
    printf("Enter the principle (P): ");
    scanf("%f", &principle);
    printf("Enter the interest rate %% (r): ");
    scanf("%f",&rate);
    rate = rate /100;
    printf("Enter the # of years(t): ");
    scanf("%d",&year);
    printf("Enter # of times compounded per year (n): ");
    scanf("%d",&compoundTime);
    totalcost = principle * pow((1 + rate/compoundTime), year * compoundTime);
    printf("After %d years, the total will be $%.2f", year, totalcost);
    getchar();
    return 0;
}