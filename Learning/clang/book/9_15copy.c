# include<stdio.h>
void interchange(int *u, int *v);
int main(void){
    int x = 5;
    int y = 10;
    printf("Originally x = %d and y = %d.\n",x,y);

    printf("In main: &x = %p, &y = %p\n", &x, &y);
    interchange(&x,&y);
    printf("Now x = %d and y = %d.\n",x,y);

    return 0;
}

void interchange(int *u, int *v){
    printf("In function: &u = %p, &v = %p\n", u, v);
    int temp;
    temp = *u;
    *u = *v; 
    *v = temp;
    printf("In function: &u = %p, &v = %p\n", u, v);
}