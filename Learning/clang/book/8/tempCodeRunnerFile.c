# include <stdio.h>
# include <stdbool.h>
void display(char ch, int row, int column);
int main (void){
    
    char ch;
    int row = 0;
    int column = 0;
    printf("Enter a character and two integers.\n");
    while (true){
    scanf("%c %d %d", &ch, &row, &column);
    if (ch !='\n'){
        display(ch, row, column);
        while (getchar() != '\n'){
            
        }
        printf("Enter another character and two integers.\n");
        printf("Enter a new line to quit.\n");
    }else {
        printf("Bye.");
        return 1;
    }
    }
    return 0;
}

void display(char ch, int row, int column){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("%c",ch);
        }
        printf("\n");
    }
    printf("\n");
}