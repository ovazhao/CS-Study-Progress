# include <stdio.h>
# define G 'g'
int main(void){

    char n = 'a';
    while (n<=G){
        printf("%c\n",n++);  //++的使用 
    }
    return 0;
}