# include <stdio.h>
# define SPACE ' '
int main (void){
    int ch;
    printf("give me a sentence:");
    while ((ch = getchar() )!= '\n'){
        
        if (ch == SPACE){
            putchar(ch);
        } else{
            putchar(ch+1);
        }
    }
    return 0;
}