# include <stdio.h>
# include <stdlib.h>
int main(){
    int num = 1;
    double *ptd;
    int check = 0;
    printf("What is the maximum number of type double entries?\n");

    while ((check= scanf("%d",&num)) != 1 || num == 0){
        while (getchar() != '\n') continue;
        if (num == 0){
            puts("Please enter an integer bigger than 0!");
            continue;
        }else if (check == EOF){
            puts("Bye.");
            break;
        }else{
            puts("Number not correctly entered -- bye.");
            exit(EXIT_FAILURE);
        }
    }
    ptd = malloc(num* sizeof(double));
    int i = 0;
    if(ptd == NULL){
        puts("Memory allocation failed. Goodbye.");
        exit(EXIT_FAILURE);
    }else{
        puts("Enter the values (q to quit):");
        
        while( i < num && (scanf("%lf", &ptd[i])==1)){
            
            printf("%5.2f",(ptd[i]));
            i++;
        }
        
    }
    printf("Here are your %d entries.\n",i);
    for(int j = 0; j < i; j++){
            printf("%5.2f",ptd[j]);
        }
    free(ptd);
    return 0;
}