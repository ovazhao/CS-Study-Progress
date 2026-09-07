#include <stdio.h>
#include<string.h>
# define SIZE 80
char* s_gets(char *string, int size);
int main(void){
    char flower[SIZE];

    char addon[SIZE];
    puts("What s your favorite flower?\n");
    if (s_gets(flower, SIZE)){
        puts("What do you think about the flower?\n");
        if (s_gets(addon, SIZE)){
            strncat(flower,addon,SIZE-strlen(flower)-1);
            puts(flower);
            puts(addon);
        }
    }
    else{
        puts("End of file encountered.\n");
    }
    return 0;
}


char* s_gets(char *string, int size){
    char *check;
    check = fgets(string, size, stdin);
    if((check != NULL) && (string[0] != '\0')){
        int i = 0;
        while(string[i]!= '\n' && string[i]!= '\0'){
            i++;
        }
        if (string[i] == '\n'){
            string[i] = '\0';
        }
        else {
            while(getchar()!='\n'){
                continue;
            }
        }
        
    }
    return check;
}