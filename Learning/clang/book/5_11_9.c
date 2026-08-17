# include <stdio.h>
/*温度转化器*/
void Temperature(double fDegree);
int main(void){
    double fDegree = 0.0f;
    double cDegree = 0.0f;
    double kDegree = 0.0f;

    printf("Give me a Fahrenheit:");
    while(scanf("%lf",&fDegree) == 1){
        Temperature(fDegree);
        printf("Give me another Fahrenheit:");
        
    }

    
    printf("Exit the program");
    return 0;

}
void Temperature(double fDegree){

    const double F_TO_C1 = 5.0/9.0;
    const float F_TO_C2 = 32.0;

    const float F_TO_K = 273.16;

    
    double cDegree = 0.0f;
    double kDegree = 0.0f;
    cDegree = F_TO_C1 * (fDegree - F_TO_C2);
    kDegree = F_TO_K + cDegree;

    printf("%.2lf, %.2lf\n",cDegree, kDegree) ;

}