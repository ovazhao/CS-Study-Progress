# include <stdio.h>
int getMax(int a, int b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){

    int a = 3;
    int b = 100;

    int z = getMax(a,b);
    printf("%d", z);
    return 0;
}