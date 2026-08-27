# include<stdio.h>
# include<stdbool.h>
int getnumber(void);
void binaryConversion (int num);
int main(){
    int num = 0;

    num = getnumber();
    while (num != -1){
    printf("Binary equivalent: \n");
    binaryConversion(num);
    printf("\n");

    num = getnumber();
    }
    return 0;
}
int getnumber(void){
    char input1 = '0';
    int num = 0;
    printf("Enter an integer (q to quit):\n");
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
            break;
            }
        }

    return num;
}
void binaryConversion (int num){
    if (num ==1){
        printf("1");
    }else if(num == 0){
        printf("0");   
    }else{
        binaryConversion(num/2);
        printf("%d",num % 2) ;
    }
}