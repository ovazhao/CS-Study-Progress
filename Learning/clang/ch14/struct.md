# struct
you dont want to go like:
```c 
int int int function(int x, int y, int z)
```

so make a struct
```c
struct city {
    char *name;
    int lat;
    int lon;
}
```

zero initializer
struct city c ={0};

preferred initializer
```c
int main() {
    struct city c = {
        .name = "San francisco",//用逗号
        .lat = 37,
        .lon = -122
    };
}
```
函数的输出值是一个struct：
```c
struct city new_city(char name, int lat, int lon) {
    struct city c = {
        .name = name,
        .lat = lat,
        .lon = lon
    };
}
```

## typedef

```c
    struct city c = {
        .name = name,
        .lat = lat,
        .lon = lon
    }coordinate_t;
```