#include<stdio.h>
#define GtoL 3.785
#define MtoKM 1.609

int main(void)
{
    float mile, gallon;

    float transfer;
    printf("mile:\n");
    scanf("%f", &mile);
    printf("gallon:\n");
    scanf("%f", &gallon);
    transfer = (gallon * GtoL * 100) / (mile * MtoKM) ;
    printf("%.1f", transfer);
    return 0;
 

}