#include <ctype.h>
# include <stdio.h>
void put1(const char *string);
int put2(const char *string);
int put3(const char *string);

int main(void)
{
    put1("If I'd as much money");
    put1(" as I could spend,\n");
    
    int char_count = put2("I never would cry old chairs to mend.");
    printf("I count %d characters.\n\n", char_count);
    
    int word_count = put3("  Hello   world!  This is a test.  ");
    printf("Word count: %d\n", word_count);
    
    return 0;
}
int put2(const char *string){
    int count = 0;
    while(*string != '\0'){
        putchar(*string++);
        if (*string == ' '){
            count++;
        }
    }
    return count;
}
void put1(const char *string){
     
    while(*string != '\0'){
        putchar(*string++);
    }
}

int put3(const char *string){
    int count = 0; 
    int last_word = 0;
    int current_word = 0;
    while(*string != '\0'){
        
        last_word = current_word;
        if (isspace(*string)){
            current_word = 0;
        }else{
            current_word =1;
        }
        if(last_word==0&&current_word==1){
            count++;
        }
        putchar(*string);
        string++;
    }
    return count;

}