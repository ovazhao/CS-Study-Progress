
# include <stdio.h>
# include <ctype.h>
# include <stdbool.h>
# define STOP '|'

int main (void){
    int c = 0;
    long n_char = 0;
    long n_line = 1;
    long n_word = 0;
    long n_partialLine = 0;
    int lastchar = '\n';
    bool inword = false;
    while((c = getchar())!='|'){
        n_char++;
        if (c=='\n'){
            n_line++;
        }
        
        if (inword && isspace(c)){
            n_word++;
            inword = false;
        }else if(!inword && !isspace(c)){
            inword = true;
        }else{
            ;
        }
        lastchar = c;


    }
    if (inword){
        n_word += 1;
    }
    if (lastchar != '\n'){
        n_partialLine = 1;
    }
    printf("word = %ld, character = %ld, line = %ld, partial line =%ld", n_word, n_char, n_line, n_partialLine);
    return 0;
}

