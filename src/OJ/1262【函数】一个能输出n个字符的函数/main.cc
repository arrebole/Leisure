#include <stdio.h>
void printchar(int n, char ch);

int main()
{
    int row, i;
    char ch;
    /*用户输入行数和指定字符*/
    scanf("%d %c", &row, &ch);
    /*控制row行输出*/
    for (i = 1; i <= row; i++)
    {
        //打印i个星星
        printchar(i, ch);
        //回车换行
        printf("\n");
    }
    return 0;
}

//@@1
void printchar(int n, char ch)
{
    for (int i = 1; i <= n;i++)
    {
        printf("%c", ch);
    }
}
//@@1