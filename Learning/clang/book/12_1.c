# include <stdio.h>
int main(void){
    int n = 8;
    int *pt = &n;
    printf("initially, n = %d at %p\n", n, pt);
    for(int n = 1; n < 3; n++){
        printf("loop 1: n = %d at %p\n", n, &n);
    }
    printf("After loop 1, n = %d at %p\n", n, &n);
    for(int n = 1; n < 3; n++){
        
        printf("loop 2 index n = %d at %p\n", n, &n);
        int n = 6;
        printf("loop 2: n = %d at %p\n", n, &n);
    }
    printf("After loop 2, n = %d at %p\n", n, &n);
}