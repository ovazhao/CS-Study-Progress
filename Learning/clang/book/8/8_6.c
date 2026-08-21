# include <stdio.h>
# include <stdbool.h>
/*判断什么时候要清空缓存区*/
void display(char ch, int row, int column);
int main (void){
    
    char ch;
    int row = 0;
    int column = 0;
    printf("Enter a character and two integers.\n");
    while ((ch = getchar())!= '\n'){
    scanf("%d %d", &row, &column);
    
    display(ch, row, column);
        
    printf("Enter another character and two integers.\n");
    printf("Enter a new line to quit.\n");
    while (getchar() != '\n');
    }
/*你的问题："还是不会判断什么时候要清空缓存区什么时候不用"
判断标准只有一条：

如果程序接下来要用 getchar() 读取字符，那么在本次 scanf() 或 getchar() 读取完数据后，必须清空缓冲区中残留的换行符。

步骤	            操作	           缓冲区状态
1	getchar() 读取 '#'	[ ' ' ][ '3' ][ ' ' ][ '5' ][ '\n' ]
2	scanf("%d %d", ...) 读取 3 和 5	[ '\n' ]
3	display() 打印	[ '\n' ]
4	while (getchar() != '\n')	读到 \n，停止，缓冲区清空
5	下一次循环	缓冲区为空，等待用户输入*/
    printf("Bye.");
    return 0;
}

void display(char ch, int row, int column){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("%c",ch);
        }
        printf("\n");
    }
    printf("\n");
}