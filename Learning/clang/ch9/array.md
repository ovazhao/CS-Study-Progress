# array

## sizeof 函数和数组函数的关系
sizeof(array)--表示整个数组占的**字节数**
所以：数组中元素的个数是
```c
int arr[10];
int number = sizeof(arr)/sizeof(arr[0]);
//总字节数除以单个元素的字节数
for (int  i = 0; i < number; i++)
{
    //用这个长度遍历数组
}
```
### 不能作为函数parameter传递
或者说sizeof这个函数里面不能是指针
```c
void printLengthArray (int arr[])//这里只是传递了数组的指针
{
    int len = sizeof(arr)/sizeof(arr[0]);
}
int main(void)
{
    int arr[10];
    printLengthArray(arr);// 传递的是指针
}
```
在同一个函数内。可以
```c
void printLengthArray ()//这里什么都没有传递
{
    int arr[10];
    int len = sizeof(arr)/sizeof(arr[0]);
}
```
### 用DEFINE
```c
#define ARRAY_LENGTH(arr) (sizeof(arr)/sizeof(arr[0]))
int main () {
    int arr[10];
    int number = ARRAY_LENGTH(arr);//直接用
}
```




## array数据类型
int arr[10]
double arr[10]
char arr[10]
### string 本身就是char的array
```c
char name[10]="bro code";
char names[][10]={"bro code", "sis code"};
//其实就是

char names[][10] = {
    {'b','r','o','\0','c','o','d','e','\0','\0'};
    {'s','i','s','\0','c','o','d','e','\0','\0'};
};
```

## array不能整体赋值
```c
int arr1[3]={1,2,3};
int arr2[3];
arr2 = arr1;//不可以

for (i=0,i<3,i++)
{
    arr2[i]=arr1[i];
}
```
## 设置default状态的array
```c
int score[5]={0};
```
## arrays and user input

```c
int score[5] = {0};
printf("Enter a score: ");
scanf("%d",&scores[0]);
```

## arrays of strings