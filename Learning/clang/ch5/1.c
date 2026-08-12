# include <stdio.h>
# include <math.h>
# define PI 3.14159
int main(void)
{
    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;

    printf("Enter the radius: ");
    scanf("%lf", &radius);
    area = PI * pow(radius,2);
    printf("Area: %.2lf\n",area);
    surfaceArea = 4 * PI * pow(radius,2);
    printf("Surface Area: %.2lf\n", surfaceArea);
    volume = 4.0/3.0 * PI * pow(radius,3) ;
    printf("Volume: %.2lf\n", volume);

    return 0;
}