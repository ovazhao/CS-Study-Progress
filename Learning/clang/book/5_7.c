# include <stdio.h>
/*英里转换km*/
# define S_PER_M 60
# define S_PER_H 3600
# define M_PER_K 0.62137

int main (void){
    double km = 0.0f;
    double mile = 0.0f;
    int min = 0;
    int sec = 0;
    int secInTotal = 0;
    double avgSpeed = 0.0f;
    double secPerMile = 0.0f;
    int minPart = 0;
    int secPart = 0;

    printf("This program converts your time for a metric race to a time for running a mile and to your average speed in miles per hour.\n");
    printf("Please enter, in kilometers, the distance run.\n");
    scanf("%lf",&km);

    printf("Next enter the time in minutes and seconds\n");
    printf("Begin by entering the minutes.\n");
    if(scanf("%d",&min) != 1){
        printf("Enter a integer.\n");
        return 1;
    }

    printf("Now enter the seconds.\n");
    scanf("%d",&sec);

    secInTotal = S_PER_M * min + sec;
    mile = M_PER_K * km;
    avgSpeed = mile / (double)secInTotal * S_PER_H;
    secPerMile = (double)secInTotal / mile;
    minPart = secPerMile / S_PER_M;
    secPart = (int)secPerMile % S_PER_M;
    minPart = (int)minPart;
    secPart = (int)secPart;
    printf("You ran %.2lf km (%.2lf miles) in %d min, %d sec.\n", km, mile, min, sec);
    printf("That pace corresponds to running a mile in %d min, %d sec.\n", minPart, secPart);
    printf("Your average speed was %.2lf mph.\n", avgSpeed);

    return 0;


}