# include <stdio.h>
# include <stdlib.h>
int main(){
    int num = 1;
    double *ptd;
    int check = 0;
    printf("What is the maximum number of type double entries?\n");

    while ((check= scanf("%d",&num)) != 1 || num == 0){
        if (num == 0){
            puts("Please enter an integer bigger than 0!");
            continue;
        }else if (num == EOF){
            puts("Bye.");
            break;
        }else{
            puts("Number not correctly entered -- bye.");
            exit(EXIT_FAILURE);
        }
    }
    ptd = malloc(num* sizeof(double));

    if(ptd == NULL){
        puts("Memory allocation failed. Goodbye.");
        exit(EXIT_FAILURE);
    }else{
        puts("Enter the values (q to quit):");
        for(int i = 0; i < num; i++){
            
            scanf("%lf", &ptd[i]);
        }
    }
    printf("Here are your %d entries.\n",num);
    for(int i = 0; i < num; i++){
            printf("%5.2f",ptd[i]);
        }
    return 0;
}