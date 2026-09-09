# include <stdlib.h>
# include <stdio.h>
# include <time.h>
# include "diceroll.h"
extern int roll_count;
int dice_num;
int dice_sides;
int sum;
int status;
int roll_n_die(int dice_num, int dice_sides);
int main(void){
    srand((unsigned int)time(0));
    puts("Enter the number of sides per die, 0 to stop.");
    while ((scanf("%d",&dice_sides)) != 0 && dice_sides >0){

        puts("How many dice?");
        if((status = scanf("%d", &dice_num)) != 1){
            if (status == EOF){
                break;
            }
            else{
                printf("You should have entered an integer.\n");
                printf("Let's begin again.\n");
                while(getchar()!='\n'){
                    continue;
                }
                printf("How many sides, 0 to stop.\n");
                continue;
            }

        }
        
        while((sum=(roll_n_die(dice_num, dice_sides)))==-1){
            scanf("%d", &dice_num);

        }
        printf("You have rolled a %d using %d %d-sided dice.\n",sum,dice_num,dice_sides);
        




        puts("How many sides, 0 to stop.");
}


    printf("The rollem() function was called %d times.\nGOOD FORTUNE TO YOU!\n",roll_count);
    return 0;
}