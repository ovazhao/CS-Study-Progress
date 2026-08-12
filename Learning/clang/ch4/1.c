# include <stdio.h>
# include <string.h>
# define Q "His Hamlet was funny without being vulgar."
int main(void)
{
    printf("$%02.2f\n",2.345e2);
    
    printf("--------------\n");
    printf("%c%c%c\n",'H',105,'\41');
    printf("--------------\n");

    printf(" %s has %d characters.\n", Q, strlen(Q));
    return 0;
}