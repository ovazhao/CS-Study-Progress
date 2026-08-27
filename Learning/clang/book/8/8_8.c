#include<stdio.h>
#include<stdbool.h>
void count(void);
char get_choice(void);
int main(void){
    char ch = ' ';
    
    while (true){
    ch = get_choice();
            switch (ch) {
                case 'a':
                    printf("Buy low, sell high.\n");
                    break;
                case 'b':
                    putchar('\a');
                    break;
                case 'c':
                    count();
                    break;
                default:
                    break;
            }
            if (ch == 'q'){
                break;
            }

    
    }    
    
    return 0;
}

void count(void){
    int n, i;
    printf("Count how far? Enter an integer:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        printf("%d\n", i);
    }
    while(getchar()!='\n'){

    }
}

char get_choice(void){
    printf("Enter the letter of your choice:\n");
    printf("a. advice          b. bell\n");
    printf("c. count           q. quit\n");
    char ch = getchar();
    while(getchar()!='\n'){

    }
    while((ch != 'a' )&&(ch != 'b' )&&(ch != 'c' )&&(ch != 'q' )){

        printf("Invalid. Please respond with a, b, c, or q:\n");

        ch = getchar();
        while(getchar()!='\n'){

            }
    }
    return ch;
}