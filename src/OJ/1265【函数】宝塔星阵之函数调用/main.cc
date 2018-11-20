#include <stdio.h>
//声明一个能打印n个字符的函数printchar
void printchar(int n, char ch);

int main()
{
    int row, i;
    /*用户输入行数(送给变量row)*/
    scanf("%d", &row);
    //控制row行输出
    for (i = 1; i <= row; i++)
    {   //调用printchar函数，输出?个空格
        printchar(row - i, ' '); //@#1
        //调用printchar函数，输出?个星号
        printchar(i, '*'); //@#2
        //回车换行
        printf("\n");
    }
    printf("\n");
    return 0;
}
//@@1
void printchar(int n, char ch)
{
    if(ch == '*')
        n = 2 * n - 1;
    for (int i = 0; i < n;i++)
    {
        printf("%c", ch);
    }
}
//@@1