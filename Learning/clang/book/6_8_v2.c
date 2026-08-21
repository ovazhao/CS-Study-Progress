# include <stdio.h>
/*do-while 结构*/
int main (void){
    int secret = 123456;
    int userInput = 0;
    printf("give me your password:\n");
    scanf("%d", &userInput);
    if (userInput != secret){
        do {
        printf("try again:");
        while (scanf("%d", &userInput)!=1){
            printf("password can only be numbers.\n");
        }
    
        }while (userInput != secret);
    }
    printf("successful!\n");
    return 0;
}