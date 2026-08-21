# include <stdio.h>
# include <stdbool.h>
double n_to_power_p(double n,int p);
int main(void){
    double n=0.0f;
    int p = 0;
    double result = 1.0f;
    printf("Enter a number and the positive integer power to which the number will be raised.\n");
        printf("Enter q to quit.\n");
    while (true){
        
        if(scanf("%lf%d",&n,&p)!=2){
            printf("hope you enjoy your trip!\n");
            printf("goodbye");
            return 0;
        }
        result = n_to_power_p(n, p);
        printf("%.3lf to the power of %d is %5lf.\n",n, p, result);
        printf("Enter next pair or q to exit.\n");
    }
    
}
double n_to_power_p(double n,int p){
    double total = 1;
    if (p>=0){
        for (int i=0;i<p;i++){
            total *= n;
        }
    }
    else{
        for (int i=0;i<-p;i++){
            total /= n;
        }
    }
    return total;
}