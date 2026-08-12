# 不要在没有赋值的之前输出这些内容
进行default
```c
int age=0;
float gpa = 0.0f;
char grade = '\0';
chat name[30] = "";
```
收集来自用户的数据,scanf

```c
int age=0;
float gpa = 0.0f;
char grade = '\0';
chat name[30] = "";

printf("Enter your age:\n")
scanf("%d",&age);
/* 收集键盘数据并且赋值到age处*/

printf("your age is %d",age)
```
注意缓冲区，占位符%c会吃空格键

```c
printf("Please enter your grade:\n");
scanf(" %c",&grade);
/*
这里占位符前加空格，意思是忽略上一次输入时留在缓冲区里面的回车键
*/
```
也就是说：
scanf("%c",&ch);从第一个字符开始读取
scanf(" %c",&ch);从第一个非空白字符开始读取
%s占位符遇到空格键自动跳出
```c
getchar();
//另一个方法去清除缓存区：使用fget
printf("Please enter your FULL name:\n");
fgets(name, 30, stdin);
/*
file get string 变量，长度，standard input
如果不知道或者没有定义长度的话，可以用一个函数sizeof（）
*/
fgets(name, sizeof(name),stdin);
name[strlen(name)-1] = '\0'
/*
使用fgets会使name自带一个换行，因此使用这一行代码，让最后字符串结尾处是终止符
也就是name='zhaomendie\0'
此外，在头文件要添加
*/
#include<string.h>
```