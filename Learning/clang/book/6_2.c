# include<stdio.h>

int main(void){
    int limit = 0;
    printf("Enter the number of terms you want:");
    scanf("%d",&limit);
    double sum = 1.0f;
    int power_of_two = 1;
    
        for (int t_ct = 0; t_ct<limit; t_ct++){
            printf("%f when the term is %d\n", sum,t_ct+1);
            power_of_two *= 2;
            sum += 1.0/power_of_two;
            
        }
        
    

    return 0;
}