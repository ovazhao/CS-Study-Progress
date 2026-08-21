
#include <ctype.h>
# include <stdio.h>


int main (){
    char ch;
    
    int guess = 1;
    printf("Pick and integer from 1 to 100. I will try to guess it.\n");
    printf("Respond with a y if my guess is right and with and n if it is wrong.\n");
    
    printf("Um...is your number 1?\n");
    ch = getchar();
  
    while (tolower(ch) != 'y'){
        
        if (tolower(ch) != 'n' ){
            printf("Please either enter y or n.\n");
            
        } else{
        printf("Well, then, is it %d?\n", ++guess);
        }
        while (getchar() != '\n'){
            
        }
        ch = getchar();
    }
    printf("I knew I could do it!");
    return 0;
}
