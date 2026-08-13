# file
## file的基本模式
```c
int main()
{
    FILE *pFile = fopen("output.txt","w");
    //等号前是指针的声明
    //fopen()返回的是一个地址
    fclose(pFile)
}
```
fopen = file open      
有开有关
fclose = file close
//1st argument path(either absolute path or relative path)
```c
FILE *pFile = fopen("C:\\Users\b\\Desktop\\output.txt","w");
// 用双斜杠
```
//2nd argument mode(r for read&w for write)还有很多mode
### fopen 返回 NULL
```c
if(pFile == NULL){
    printf("Error opening file.");
    return 1;//在main里面return 1 是error的意思
}


```
## FILE是一个built in 的struct
fopen() 在内存的某个位置会创建一个FILE结构体，并返回他的地址
pfile存折这个地址
以后所有文件操作函数(fread,fwrite,fclose)都通过这个指针来找
## write file
在fopen与fclose之间
```c
char text[]= "BOOTY BOOTY BOOTY\NROCKIN' EVERYWHERE"
if(pFile == NULL){
    printf("Error opening file.");
    return 1;//在main里面return 1 是error的意思
}

fprintf(pFile,"%s",text);
//file printf
//指针，替换符，变量名
printf("File was written successfully.\n");
fclose(pFile);
```

## read file
先要有一个可读的文件

基本形式
```c
FILE *pFile = fopen("input.txt","r");
fclose(pFile);
```
用if以防找不到这个文档（地址为NULL）

```c
if(pFile == NULL){
    printf("Could not open file\n");
    return 1;
}
```

创建一个缓存区用于把文档内容存进去
不然就是一个char一个char的读、显示
```c
char buffer[1024]= {0};//1kb size, default to 0
```

### 用fget函数来确定什么时候文章被读完了
读完了就返回NULL
```c
fget(buffer,sizeof(buffer),pFile) != NULL;
//完整形态
while(fget(buffer,sizeof(buffer),pFile) != NULL){
    printf("%s",buffer);
}
```
1. 调用fget函数
2. 尝试从buffer里面读取内容
3. 读到了内容-返回buffer地址-非空-取了buffer内容print出来
4. 文件读完，fget的地址返回为空，while loop退出
## 与fget有关
### fget()可以从任何输入流读取，不限于键盘
**fget中最后一个参数**
| 流名    | 类型   | 默认设备 | 作用         |
|---------|--------|----------|--------------|
| stdin   | FILE*  | 键盘     | 标准输入     |
| stdout  | FILE*  | 屏幕     | 标准输出     |
| stderr  | FILE*  | 屏幕     | 标准错误     |
stdin和pFile都是FILE*类型（文件指针），所以用法一样
### fget的返回值
| 情况             | 返回值              | 说明                         |
|------------------|---------------------|------------------------------|
| 成功读取         | buffer 的首地址     | 指向存储读取内容的缓冲区     |
| 读到文件末尾     | NULL                | 已到达文件末尾，无数据可读   |
| 发生错误         | NULL                | 读取过程中出现错误           |
### fget通用执行流程
fget(参数，size，指针)
1. 检查参数是否有效
2. 尝试获取数据：从FILE*对应的buffer/设备读取字符
3. 停止条件
   - 读到\n
   - 读满了size-1个字符
   - 遇到了文件末尾
   - 发生了I/O错误
4. 追加\0
5. 返回结果：
    - 成功->返回buffer首地址
    - 失败->返回NULL
### 一个例子
假设文件内容是：

```c
Line 1
Line 2
Line 3
```
| 第几次循环 | fgets() 读到      | buffer 内容   | 文件位置指针指向             |
|------------|-------------------|---------------|------------------------------|
| 第1次      | `"Line 1\n"`      | `"Line 1\n"`  | 第2行开头                    |
| 第2次      | `"Line 2\n"`      | `"Line 2\n"`  | 第3行开头                    |
| 第3次      | `"Line 3\n"`      | `"Line 3\n"`  | 文件末尾（EOF）              |
| 第4次      | 读到 EOF          | 不变          | 还是文件末尾 → 返回 NULL，退出循环 |