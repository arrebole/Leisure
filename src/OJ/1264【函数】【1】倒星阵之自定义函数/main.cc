#include <stdio.h>
void star(int n);
void space(int n);
int main()
{
    int row, i;
    /*用户输入行数(送给变量row)*/
    scanf("%d", &row);
    /*控制row行输出*/
    for (i = 1; i <= row; i++)
    { //打印i-1个空格
        space(i - 1);
        //打印(row-(i-1))个星星
        star(row - (i - 1));
        //回车换行
        printf("\n");
    }
    printf("\n");
    return 0;
}

//@@1
void star(int n)
{
    for (int i = 0; i < n;i++)
        printf("*");
}
void space(int n)
{
    for (int i = 0; i < n; i++)
        printf(" ");
}
//@@1