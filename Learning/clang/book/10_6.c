# include <stdio.h>
int main(void){

    // 在这里定义数组和指针，并赋值
    int urn[5]={100,200,300,400,500};
    int *ptr1 = urn;
    int *ptr2 = &urn[2];

    printf("ptr1 = %p, ptr2 = %p, *ptr2 = %d\n", ptr1, ptr2, *ptr2);
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
    getchar();
    //指针与整数相加
    int *ptr3 = (ptr1 + 4);
    printf("ptr3 = %p, *ptr3 = %d\n", ptr3, *ptr3);
    printf("ptr1 + 4 = %p\n", (ptr1 + 4));

    int *ptr3_1 =(urn + 4);
    printf("*(urn + 4) = %d\n", *(urn + 4));   // 输出 400（urn[3] 的值）
    printf("urn + 4 = %p\n", ptr3_1);       // 输出 400（等价写法）
    
    

    //递增指针（ptr1++）
    ptr1++;
    ptr1++;
    ptr1++;
    ptr1++;//效果和ptr1+4一样
    getchar();
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

    //递减指针（ptr2--）
    ptr2--;
    ptr2--;
    getchar();
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);

    //指针差值
    getchar();
    printf("ptr2 - ptr1 = %td\n", ptr2 - ptr1);

    //指针减去整数
    printf("ptr3 - 2 = %p, *(ptr3 - 2) = %d\n", ptr3 - 2, *(ptr3 - 2));

    //比较
    getchar();
    printf("ptr1 < ptr2 = %d\n", ptr1 < ptr2);
    printf("ptr2 < ptr3 = %d\n", ptr2 < ptr3);
    printf("ptr3 = ptr1 = %d\n", ptr3 == ptr1);

    getchar();

printf("ptr1 = %p, ptr2 = %p\n", --ptr1, ++ptr2);
printf("*ptr1 = %d,  *ptr2 = %d\n", *ptr1, *ptr2);
    return 0;
    
}