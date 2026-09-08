# include<stdio.h>
# include<string.h>
# define ANSWER "grant"
void combine(char*flower, char*addon, int len);
char* s_gets(char *string, int size);
int main(void){
    puts("Who is buried in Grant's tomb?\n");
    char try[40];
    char wrong_answer[100] = "";
    char *h = s_gets(try, 40);
        while (strcmp(try, ANSWER) != 0){
            combine(wrong_answer, h, 40);
            
            puts("No, that's wrong. Try again.\n");
            
            h = s_gets(try, 40);
        }
        puts("You re right!\n");
        printf("Your past answers are:%s",wrong_answer);
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

void combine(char*flower, char*addon, int len){
   

    strncat(flower,addon,len-strlen(addon)-1);

    
}