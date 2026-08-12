## random num
rand()一个掷骰子的函数

### pseudo random
```c
# include<stdlib.h>

int main(){
    printf("%d", rand());
}
\\无论重复多少遍都是一个数字
```

### seed
rand()=f(seed)
same seed, same random number

by default, seed = 1

#### 用 srand() to 设置种子
但是注意！每个对应的种子里的随机是都是同一个序列---可以把种子看作是num array
```c
.....
# include<stdlib.h>

int main(){
    srand(100);
    printf("%d", rand());\\365
    printf("%d", rand());\\1218
    printf("%d", rand());\\23532
    srand(200);
    printf("%d", rand());\\1367
    printf("%d", rand());\\337
    printf("%d", rand());\\6852
    srand(100);
    printf("%d", rand());\\365(重新开始，跟第一次一样)
    printf("%d", rand());\\1218
    printf("%d", rand());\\23532
}
```
#### 用当前时间当作种子
```c
.....
# include<stdlib.h>
# include<time.h>\\ time()在这里面
int main(){
    srand(time(NULL));
    printf("%d", rand());
    return 0;
    \\这下每次输出都不一样了
}
```

### 想对随机数做限制
那么就用 % ，取模运算
#### 1 or 0
```c
.....
# include<stdlib.h>
# include<time.h>\\ time()在这里面
int main(){
    srand(time(NULL));
    int randomNum = rnad() % 2;
    printf("%d", randomNum);
    return 0;
    
}
```

#### min to max
```c
.....
# include<stdlib.h>
# include<time.h>\\ time()在这里面
int main(){
    int min=10;\\生成10-60的随机数
    int max=60;
    srand(time(NULL));
    int randomNum = (rand() % (max - min +1)) + min; 
    \*理解这一行：
    首先，(max - min +1）用于设定周期，在周期内有123..50
    其次，+ min是将bar提高到min以上变成11，12，13....
    *\
    printf("%d", randomNum);
    return 0;
    
}
```