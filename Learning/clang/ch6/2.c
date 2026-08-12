# include <stdio.h>
# include <stdbool.h>
# include <string.h>

int main(void)
{
    const float offStudent = 0.1f;
    const float offSenior = 0.2f;
    const float originalPrice = 10.0f;
    float price = 0.0;
    char answer[5]="";
    char answer2[5]="";
    bool student = false;
    bool senior = false;
    printf("Are you a student?\n");
    fgets(answer, sizeof(answer),stdin);
    answer[strlen(answer)-1] = '\0';
    if (strcmp(answer, "yes") == 0)
    {
        student = true;
    }
    printf("Are you a senior?\n");
    fgets(answer2, sizeof(answer2),stdin);
    answer2[strlen(answer2)-1] = '\0';
    if (strcmp(answer2, "yes") == 0)
    {
        senior = true;
    }
    
    if (student)
    {
        if (senior)
        {
            printf("you're a student, you have a 10%% off.\n");
            printf("you're a senior, you have a 20%% off.\n");
            
            price = originalPrice * (1-offStudent) * (1-offSenior);
            printf("Your ticket price is $%f\n", price);
        }
        else{
            printf("you're a student, you have a 10%% off.\n");
            
            price = originalPrice * (1-offStudent);
            printf("Your ticket price is $%f\n", price);
        }
    }

    
    else if (senior)
    {
        printf("you're a senior, you have a 20%% off.\n");
        price = originalPrice * (1-offSenior);
        printf("Your ticket price is $%f\n", price);
    }
    else
    {
        printf("Your ticket price is $%f\n", originalPrice);
    }
    getchar();
    return 0;
}
