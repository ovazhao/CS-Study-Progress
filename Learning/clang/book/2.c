# include <stdio.h>
int getAndIncrement(int *p);
int main(void){
    int i = 0;
    
    while (getAndIncrement(&i)<10)
    {
        printf("%d\n",i);
    }
    return 0;
}

int getAndIncrement(int *p)
{
    return (*p)++;
}