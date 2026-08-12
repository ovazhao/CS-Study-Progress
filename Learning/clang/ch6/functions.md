```c
void happyBirthday(char name[],int age)
{
    printf("Happy Birthday %s, you are %d years old!", name, age);

}

int main()
{
    char name [] = "Bro";
    int age = 25;

    happyBirthday(name,age);
    return 0;
}
```

```c
int square (int num){  \\ 有return值的时候记得改()以及函数前
    int result = num*num;
    return result;
}
```

### function prototype

```c
void happyBirthday(char name[],int age);\\function prototype

int main()
{
    char name [] = "Bro";
    int age = 25;

    happyBirthday(name,age);
    return 0;
}

void happyBirthday(char name[],int age)
{
    printf("Happy Birthday %s, you are %d years old!", name, age);

}
```