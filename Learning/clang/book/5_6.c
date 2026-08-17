# include <stdio.h>
/*使用array+for来优化重复的调用函数*/
void pound(int n);
void numConvertHashes (void);
int main(void){
    numConvertHashes();
    return 0;
}
void pound(int n){
    while (n-->0){//看++，--使用的地方
        printf("#");
    }
    printf("\n");
}
void numConvertHashes (void){
        int times = 5;
    char character= '!';
    float float_num = 6.0f;

    int array_of_variable[3]={times, (int)character, (int)float_num};

    for (int i =0; i < sizeof(array_of_variable)/sizeof(array_of_variable)[0]; i++){
        pound(array_of_variable[i]);
    }
}