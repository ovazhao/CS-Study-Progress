# include <stdio.h>
# include <stdbool.h>
int get_long();
bool good_limit(long LOWEST, long HIGHEST ,int lower,int upper);
int sum_squares (int upper, int lower);
int main (void){
    const long MIN_CASE = -10000000;
    const long MAX_CASE = 10000000;
    int lowerCase = 0;
    int upperCase = 0;
    int result = 0;
    printf("This program computes the sum of the squares of integers in a range.\n");
    printf("The lower bound should not be less than %ld and the upper bound should not be more than +%ld.\n",MIN_CASE, MAX_CASE);
    printf("Enter the limits (enter 0 for both limits to quit):\n");
    printf("Lower limit: \n");
    lowerCase = get_long();
    printf("Upper limit: \n");
    upperCase = get_long();
    
    while (lowerCase!=0 || upperCase!=0){
        
        if(good_limit(MIN_CASE, MAX_CASE, lowerCase, upperCase)==true){//最无法确定的就是这一行，在if的条件里面该函数里print的内容会不会真的被print出来，是指证明是会的
            result = sum_squares(upperCase, lowerCase);
            printf("The sum of the squares of the integers from %d to %d is %d.\n", lowerCase,upperCase,result);
        } else{
            printf("Please try again.\n");}

            printf("Lower limit: \n");
            lowerCase = get_long();
            printf("Upper limit: \n");
            upperCase = get_long();
        }
        
        
    printf("Done.");
    return 0;
}

int get_long(){
    int ch = 0;
    while (scanf("%d", &ch) != 1){
        while((ch = getchar())!= '\n'){
            putchar(ch);    
        }
        printf(" is not and integer.\n");
        printf("Please enter an integer value, such as 25, -178, or 3:\n");
    }
    return ch;
}
bool good_limit(long LOWEST, long HIGHEST ,int lower,int upper){
    bool good= false;
    if (lower > upper) {
        printf("%d is not smaller than %d\n", lower, upper);
    }
    else if (lower < LOWEST || upper < LOWEST){
        printf("the value must be %ld or greater.\n",  LOWEST);
    }
    else if (upper > HIGHEST) {
        printf("the value must be %ld or less.\n", HIGHEST);
    }
    else{
        good= true;
    }
    return good;
}

int sum_squares (int upper, int lower){
    int sum_up = 0;
    for (int i = lower; i <= upper; i++){
        sum_up+= i*i;
    }
    return sum_up;
}