#include <stdio.h>
#include "hotel.h"
int menu(void){
    int num = 0;
    printf("%s\n",STARS);
    printf("Enter the number of the desired hotel:\n");
    printf("1) Fairfield Arms          2) Hotel Olympic\n");
    printf("3) Chertworthy Plaza       4) The Stockton\n5) quit\n");
    printf("%s\n",STARS);
    
    while((scanf("%d", &num)!=1)||((num < 1)||(num > 5))){
        printf("Enter an integer from 1 to 5, please.\n");
        while(getchar()!='\n'){

        }
        num = getchar();
    }
    return num - '0';
}
int getnights(void){
    int nights = 0;
    while (1){
        printf("How many nights are needed?");
        
        if (scanf("%d", & nights) == 0){
            printf("Please enter an integer, such as 2.");
            while(getchar()!='\n'){

            } 
            nights = 0;
            continue;
        }else {
            if (nights <= 0){
                printf("Input a number within range.");
                while(getchar()!='\n'){

                } 
                nights = 0;
                continue;
            } else {
                while(getchar()!='\n'){

                } 
                break;
            }
        }
    }
    return nights;
}

void showprice(double rate, int nights){
    double thisNight = rate;
    double sum = rate;
    for (int i = 1; i < nights; i++){
        thisNight *= DISCOUNT;
        sum += thisNight;
    }
    printf("The total cost will be $ %.2f.\n", sum);
}