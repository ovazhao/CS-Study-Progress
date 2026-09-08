# include <stdio.h>
# include <string.h>
# define LIM 10
# define SIZE 80
# define QUIT "quit"
int s_gets(char* input, int len, const char quit[]);
int main(void){
    char input[LIM][SIZE];
    int ct = 0;
    int check = 0;
    printf("Enter up to %d lines(type quit to quit).\n",LIM);
    for (ct = 0; ct < LIM ; ct++){
        check = s_gets(input[ct], SIZE, QUIT);
        if (check == 1){
            puts("succeed.\n");
        }else if(check == 0){
            break;
        }
    }
    printf("%d strings entered:\n",ct);
    for (int i = 0; i < ct; i++){
        printf("%d:%s\n",i+1,input[i]);
    }
    return 0;
}





int s_gets(char* input, int len, const char quit[]){
    int check = 1;
    int i = 0;
    char* ret_val;
    ret_val = fgets(input, len, stdin);
    if ((ret_val != NULL)&&(ret_val[0]!='\0')){
        while((input[i] != '\0') && (input[i] != '\n')){
            i++;
        }
        if (input[i] == '\n'){
            input[i] = '\0';
        }else{
            int ch;
            while((ch = getchar())!='\n'&& ch != EOF){
                continue;
            }
        }
        if(strcmp(ret_val, quit) != 0){
            check = 0;
        }
    }else{
        check = 0;
    }

    return check;
}