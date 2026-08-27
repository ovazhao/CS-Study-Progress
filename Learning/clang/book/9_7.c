# include<stdio.h>
# include<stdbool.h>
/*限制用户输入位数，字母与数字混合输入，递归*/
int getnumber(void);
int fact(int num);
long rfact(int n);
int main(){
    int num = 0;
    int result = 1;
    long result2 = 1;
    printf("This program calculates factorials.\n");

    num = getnumber();
    while (num != -1){
        result = fact(num);
        result2 = rfact(num);
        printf("The factorial of %d is: \n",num);
        printf("Loop: %d.   Recursion: %ld\n",result,result2);
        num = getnumber();
 
    }

        

    
    return 0;

}

int getnumber(void){
    char input1 = '0';
    int num = 0;
    printf("Enter a value in the range 0-12 (q to quit):\n");
    input1 = getchar();
    while(true){
        if(input1 == 'q'){
            num = -1;
            break;
        }else if(!(input1 >= '0' && input1 <= '9')&&(input1 !='\n')){
            printf("Invalid input. Please enter a number not character. (q to quit)\n");
            while (getchar()!='\n'){

            }
            num = 0;
            input1 = getchar();
            continue;
        }else if(input1 >= '0' && input1 <= '9'){
            num = num *10 + input1 - '0';
            input1 = getchar();
            continue;
        }else{
            if(num <= 12){
                break;
            } else{
            printf("Please reupload a number within range.\n");
            num = 0;
            input1 = getchar();

            continue;  
            
            }
        }
    }
    return num;
}
int fact(int num){
    int result = 1;
    for (int i = 1; i <= num; i++){
        result *= i;
    }
    return result;
}

long rfact(int n){
    long result;
    if(n <= 1){
        return 1;
    }else{
        return n * rfact(n-1);
    }
}