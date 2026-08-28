# pointer
a reference that holds a memory address to another variable
## 地址
&变量名

## 数据类型应该与变量一样
```c
int age = 21;
//pointer has its own address but the value store within it is the address of variable age
**int** *pAge = &age；
```
*指针名
在声明的时候用来说明pAge是一个指针的意思

## 命名法 
**p**Age
```c
printf("value of pAge: %p/n", pAge)
```

## dereference
*指针名
在调用的时候说明在取用这个地址上存贮的value
```c
printf("value of age:%d\n", age);
printf("value at stored address: %d\n", *pAge)//value一样,21
```

## default状态assignNULL
```c
int age =21;
int *pAge = NULL;
pAge = &age;
```

![alt text](image.png)

## 我的顿悟
- 普通变量把**值**作为*基本量*，把**地址**作为通过&运算符来获得的*派生量*，指针是把**地址**作为*基本量*，把变量作为通过*运算符来获得的*派生量*
- 对于被调函数来说，使用return会将其中的一个值传给主调函数（**return只能返回一个值**）。被调函数一般不会改变主调函数中的变量，如果要改变，应该使用指针作为传入的参数，如果希望把更多的值传回主调函数，必须这么做（**用ptr做到修改多个变量**）。
