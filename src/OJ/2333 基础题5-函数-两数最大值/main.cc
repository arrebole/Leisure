#include <stdio.h>
//函数声明
//@#1
int max(int x, int y);

main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", max(x, y));
}

//函数定义
//@@1
int max(int x, int y)
{
    if (y > x)
        return y;
    return x;
}
//@@1