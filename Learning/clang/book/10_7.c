#include <stdio.h>
int main(void)
{
    int zippo[4][2] = { { 2, 4 }, { 6, 8 }, { 1, 3 }, { 5, 7 } };
    int (*ptr1)[2] = zippo;
    int *ptr2 = &zippo[0][0];
    printf("zippo       = %p, *ptr1 = %d \nzippo[0]    = %p, *zippo[0] = %d,\n", ptr1, (*ptr1)[0], ptr2, *ptr2);

    getchar();
    printf("zippo       = %p\n", zippo);
    printf("zippo + 1   = %p\n", zippo + 1);
    printf("*(zippo + 1)   = %d\n", *(ptr1 + 1)[0]);
    printf("ptr1        = %p\n", ptr1);
    printf("ptr1 + 1    = %p\n", ptr1 + 1);

    getchar();
    printf("zippo[0]    = %p\n", ptr2);
    printf("zippo[0] + 1   = %p\n", (ptr2 + 1));
    printf("*zippo     = %p\n", *zippo);
    printf("zippo[0][0]  = %d\n", *ptr2);

    getchar();
    printf("zippo[2][1]  = %d\n", zippo[2][1]);
    printf("zippo[2][1]  = %d\n", (*(ptr1+2))[1]);
    printf("zippo[2][1]  = %d\n", *(*(ptr1+2)+1));
    return 0;
}

