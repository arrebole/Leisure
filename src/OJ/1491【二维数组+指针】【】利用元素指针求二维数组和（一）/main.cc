#include "stdio.h"
//@#1
#define M 3
//@#2
#define N 4

int main()
{
    int a[M][N];
    int i, *p, s = 0, k;
    p = a[0]; //指针P指向二维数组的首元素

    for (i = 0; i < M * N; i++, p++) //输入数据存入二维数组
    {
        scanf("%d", p); //@#3
        s = s + *p;
    }

    k = 0;
    //利用指针进行循环,从首单元地址到末单元地址
    for (p = &a[0][0]; k < i; p++ /*@#4*/)
    {
        printf("%d ", *p);
        k++;
        if (k % 4 == 0) //每4个数据换一行
            putchar('\n');
    }
    // @#5
    printf("%d\n", s);
    return 0;
}