# include <stdio.h>
# include <stdlib.h>
# include "diceroll.h"
int roll_count = 0;
static int rollem(int sides){

    int roll = rand() % sides + 1;
    roll_count++;
    return roll;
}

int roll_n_die(int dice_num, int dice_sides){
    int sum = 0;
    if((dice_sides<2) || (dice_num<1)){
        printf("Error, please enter correct number:\n");
        sum = -1;
    }else{
        for (int i = 0; i < dice_num; i++){
            sum += rollem(dice_sides);
        }
    }
    return sum;
}

