# if
## 如果要用到Boolean，需要加一个
include<stdbool.h>
## 如果有很多if else 的话
```c
int dayOfWeek = 0;

switch(dayOfWeek){
    case 1:\\if dayOfWeek ==1 的意思
        printf("It is Monday.");
        break;
    case 2:
    .....
}
```