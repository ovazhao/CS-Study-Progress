# include <stdio.h>
int count = 0;
void report_count(void);
void accumulate(int k);
extern int total;
extern int subtotal;
int main(void){
    puts("Enter a positive integer (0 to quit):");
    int digit;
    while((scanf("%d", &digit) == 1) && (digit > 0)){
        count++;
        
        for(int i = digit; i >= 0; i--){
        accumulate(i);
        }
        
        puts("Enter a positive integer (0 to quit):");
    
    
}
report_count();
}
void report_count(void){
    printf("Loop executed %d times.",count);
}
