# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(void)
{
    srand(time(NULL));
    int min = 1;
    int max = 100;
    int target = rand() % max + 1;
    int guessing = 0;
    int tries = 0;
    printf("***NUMBER GUESSING GAME***\n");
    
    
    while (guessing != target)
    {
        printf("Guess a number between 1 - 100:");
        scanf("%d", &guessing);
        tries ++;
        if (guessing > target)
        {
            printf("TOO HIGH!\n");
        }
        else if (guessing < target)
        {
            printf("TOO LOW!\n");
        }
        else
        {
            printf("CORRECT!\n");
            printf("The answer is %d\n", target);
            printf("It took you %d tries\n", tries);
        }
    }

    return 0;
}
