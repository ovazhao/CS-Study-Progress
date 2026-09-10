# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main(void){
    srand((unsigned int)time(0));

    int num_list[100];
    int i = 0;
    for ( i = 0; i < 100; i++){
        num_list[i] = rand()% 10 + 1;
    }
    int num = 0;
    int j = 0;
    for (j = 0; j < 99 ; j++){
        for(i = 0 ; i < 99; i++){
            if (num_list[i]> num_list[i+1]){
                num = num_list[i];
                num_list[i] = num_list[i+1];
                num_list[i+1]=num;
            }
        }
    }
    for ( i = 0; i < 100; i++){
        printf("%d ",num_list[i] );
    }
    return 0;
}