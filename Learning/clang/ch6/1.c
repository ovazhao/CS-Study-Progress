# include <stdio.h>
# include <string.h>

int main(void)
{
    char name[50]="";

    printf("Type your name:");
    fgets(name, sizeof(name),stdin);
    name[strlen(name)-1] = '\0';
    if (strlen(name) == 0){
        printf("You did not enter your name.")
    } 
    else{
        printf("Hello, %s", name);
    }

    return 0;
}