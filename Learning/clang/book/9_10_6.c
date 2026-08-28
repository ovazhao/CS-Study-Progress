# include <stdio.h>
# define STAR "********************"
typedef struct {
    int id;
    const char* desc;
    void (*action)(void);
} MenuItem;

int getnumber(void);
void alter(int *alter_x, int *alter_y);
int the_biggest_in_two(int a, int b);
int the_biggest_in_three(int a, int b,int c);
void sort3(int *a, int *b,int *c);
int char_to_num(void);
void power(int decimal, int base);
void do_swap(void);
void do_test(void);
void do_largest3(void);
void do_sort3(void);
void do_chartonum(void);
void do_baseconv(void);
MenuItem menu[] = {
    { 6,  "T6\n",  do_swap },
    { 7,  "T7\n",  do_test },
    { 8,  "T8\n",  do_largest3 },
    { 9,  "T9\n",  do_sort3 },
    { 10, "T10\n", do_chartonum },
    { 11, "T11\n", do_baseconv },
};
int main (void){
    int number = 0;

    int the_biggest_in_three_a =7;
    int the_biggest_in_three_b =17;
    int the_biggest_in_three_c =12;
    int num = 0;
    int decimal = 0;
    int base = 0;
    int status = 0;
    printf("This is a program for testing all my practices in 9.10\n");
    number = getnumber();
    while (number != 0){
        switch (number) {
            case 6:
                do_swap();
                break;
            case 7:
                do_test();
                break;
            case 8:
                do_largest3();
                break;
            case 9:
                do_sort3();
                break;
            case 10:
                do_chartonum();
                break;
            case 11:
                do_baseconv();
                break;
                
            default:
                break;



            
        }
        number = getnumber();
    }
    return 0;
}
int getnumber(void){
    int num = 0;
    getchar();
    printf("%s\n",STAR);
    printf("Which practice do you want to test?(0 to quit)\n");
    printf("T6\nT7\nT8\nT9\nT10\nT11\nT:");
    scanf("%d",&num);
    while((num!=6)&&(num!=7)&&(num!=8)&&(num!=9)&&(num!=10)&&(num!=11)&&(num!=0)){
        printf("Not within the range. Try again.\n");
        num = 0;
        scanf("%d",&num);
    }
    while(getchar()!='\n'){

    }
    return num;
}

void alter(int *alter_x, int *alter_y){
    int sum_of_two = 0;
    int sub_of_two = 0;
    sum_of_two = *alter_x + *alter_y;
    sub_of_two = *alter_x - *alter_y;
    *alter_x = sum_of_two;
    *alter_y = sub_of_two;
}

int the_biggest_in_three(int a, int b,int c){
    return the_biggest_in_two(a,the_biggest_in_two(b, c));
}
int the_biggest_in_two(int a, int b){
    return (a>b)? a:b;
}
void sort3(int *a, int *b,int *c){
    int temp1 = 0;
    int temp2 = 0;
    int temp3 = 0;
    
    if (*a >= *b){
        temp2 = *b;
        *b = *a;
        *a = temp2;

    }
    if (*a >= *c){
        temp1 = *c;
        *c = *a;
        *a = temp1;
    }
    if (*b >= *c){
        temp3 = *b;
        *b = *c;
        *c = temp3;
    }

}
int char_to_num(void){
    char ch = ' ';
    printf("Give me a character.(Any special notes to quit the program).\n");
    ch = getchar();
    while(getchar()!='\n'){

    }
    if((ch >= 'a') || (ch <= 'z')){
        return ch - 'a' + 1;
    }
    else{
        return -1;
    }

    
}

void power(int decimal, int base){
    if (decimal/base == 0){
        printf("%d",(decimal % base));
    }
    else{
        power(decimal/base,base);
        printf("%d",(decimal % base));
    }
}

void do_swap(void){
    int alter_x = 3;
    int alter_y = 5;
    printf("the value of x is %d, the value of y is %d.\n", alter_x, alter_y);
    alter(&alter_x, &alter_y);
    printf("the value of x is %d, the value of y is %d.\n", alter_x, alter_y);
}

void do_test(void){
    printf("correct.\n");
}

void do_largest3(void){
    int the_biggest_in_three_a = 7;
    int the_biggest_in_three_b = 17;
    int the_biggest_in_three_c = 12;
    printf("the value of a is %d, the value of b is %d,the value of c is %d.\n", the_biggest_in_three_a, the_biggest_in_three_b, the_biggest_in_three_c);
    the_biggest_in_three(the_biggest_in_three_a, the_biggest_in_three_b, the_biggest_in_three_c);
    printf("The biggest of them is %d.\n", the_biggest_in_three(the_biggest_in_three_a, the_biggest_in_three_b, the_biggest_in_three_c));
}

void do_sort3(void){
    int the_biggest_in_three_a = 7;
    int the_biggest_in_three_b = 17;
    int the_biggest_in_three_c = 12;
    printf("Now sort the sequence of a, b, c.\n");
    sort3(&the_biggest_in_three_a, &the_biggest_in_three_b, &the_biggest_in_three_c);
    printf("the value of a is %d, the value of b is %d,the value of c is %d.\n", the_biggest_in_three_a, the_biggest_in_three_b, the_biggest_in_three_c);
}

void do_chartonum(void){
    int num = 0;
    printf("This is for convert characters to numbers.\n");
    num = char_to_num();
    printf("The number is %d.\n", num);
}

void do_baseconv(void){
    int decimal = 0;
    int base = 0;
    int status = 0;
    printf("This is for converting decimal to any base(from 2 to 9).\n");
    printf("Give me the Decimal:");
    scanf("%d",&decimal);
    printf("Give me the base(from 2 to 9):\n");
    while ((status = (scanf("%d",&base) == 0))||(base<2)||(base>9)){
        if(status == 0){
            scanf("%*s");
        }else{
            printf("Please enter a base within range.\n");
        }

    };
    printf("The result converting %d to base %d is ", decimal, base);
    power(decimal,base);
    while(getchar()!='\n'){
        }
    printf("\n");
}