# include <stdio.h>
/*数组传进函数就退化成指针了,
函数内 sizeof 拿到的不是数组大小。
所以函数需要单独接收 len 参数才能知道长度。*/
# define SIZE 10
int sum(int ar[], int len);
int main(void){
    int answer = 0;
    int marbles[SIZE]={20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    answer = sum(marbles, SIZE);
    printf("the sum = %d\n",answer);
    printf("size of marbles = %zd\n",sizeof(marbles));
    return 0;
}
int sum(int ar[], int len){
    int total = 0;
    for (int i = 0; i < len; i++){
        total += ar[i];
    }
    printf("size of ar = %zd\n",sizeof(ar));
    return total;
}