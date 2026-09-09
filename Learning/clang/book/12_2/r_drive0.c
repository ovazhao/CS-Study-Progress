# include <stdio.h>

extern unsigned int rand1();
extern void srand1(unsigned int seed);
int main(void){
    unsigned s;
    puts("Please enter your choice for the seed.");
    while((scanf("%u",&s))!=0){
        srand1(s);
        puts("-----------");
        for(int i = 0; i < 5; i++){
        
        printf("%d\n",rand1());}

        puts("Please enter another choice for the seed.");
    }
    return 0;
}
