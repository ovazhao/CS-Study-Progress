# include <stdio.h>

int main () {
    char *str1 = "hello";
    char str2[] = "world";
    printf("%s", str1 );
    printf("%s\n", str2);

    //str1[0]= 'H';
    str2[0] = 'W';
    printf("%s", str1 );
    printf("%s\n", str2);
    return 0;
}