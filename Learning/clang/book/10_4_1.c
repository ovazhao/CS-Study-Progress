# include <stdio.h>
/*数组传进函数就退化成指针了,
函数内 sizeof 拿到的不是数组大小。
所以函数需要单独接收 len 参数才能知道长度。*/
# define SIZE 10
int sump(int *start, int *end);
int main(void){
    int answer = 0;
    int marbles[SIZE]={20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    answer = sump(marbles,marbles+SIZE);
    printf("The total number of marbles is %d", answer);
    return 0;
}

int sump(int *start, int *end){
    int sum = 0;
    while(start < end){
        sum += *start;
        start++;
    }
    return sum;
}