#include <stdio.h>
extern int count;
int total = 0;
int subtotal = 0;
void accumulate(int num){
    if(num <= 0){
        
        printf("loop cycle: %d\n",count);
        printf("subtotal: %d    total:%d\n", subtotal, total);
        subtotal = 0;
    }else{
        subtotal+=num;
        total += num;
    }
    
}