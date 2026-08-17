# include<stdio.h>
/*用scanf("%ld", &num)来判断用户输入是否合格式
这个while是不确定循环——在测试表达式为假之前，预先不知道要执行多少次循环*/

int main (void){
    long num = 0;
    long sum = 0;
    printf("Please enter an integer to be summed ");
        printf("(q to quit): ");

        while (scanf("%ld", &num) == 1)  
        {
            sum = sum + num;
            printf("Please enter next integer (q to quit): ");
            
        }
        printf("The answer is %ld\n", sum);
        return 0;
    }