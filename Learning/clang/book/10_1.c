# include<stdio.h>
# define SIZE 3
int main(void){
    
    int no_data[SIZE]={111,222};
    printf("%s%14s\n","i","no_data[i]");
    for(int j = 0; j < SIZE ; j++){
        printf("%d",j);
        printf("%14d\n",no_data[j]);
    }
    return 0;
}