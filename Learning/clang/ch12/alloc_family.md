# malloc
A function in c that 预定一部分内存作为heap

```c
# include <stdlib.h>
int number = 0;
printf("Enter the number of grades:");
scanf("%d",&number);
char *grades = malloc(number * sizeof(char))
// 前面跟声明指针一样
// malloc里面是取用的代码大小：number=char的个数 sizeof character
```
有借有还
```c
free(grades); // returning the space
grades = NULL;//pointer 的地址清除
```
如果内存不够导致的grades的地址是NULL
```c

if (grades == NULL){
    printf("Memory Allocation failed\n");
    return 1;
};//pointer 的地址清除
```
## 在这个heap里面我们可以...
### 通过输入开始存入数据
```c
for (int i = 0; i < number; i++)
// 这里我们不用sizeof(grades)/sizeof(grades[0]):因为grades是地址
{
    printf("Enter grade number %d",i);
    scanf(" %c",&grade[i]);

}
```
### 通过calloc来初始化数据
calloc 和 malloc区别：
内存初始化	不初始化（存的是垃圾值）	全部初始化为 0

所有heap里面的数据被初始化为0
```c
# include <stdlib.h>
int number = 0;
printf("Enter the number of players:");
scanf("%d",&number);
char *scores = calloc(number, sizeof(char))
// 前面跟声明指针一样
// calloc里面是取用的代码大小注意逗号
```