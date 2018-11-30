#include <stdio.h>

#define N 100

int main()
{
    int a[N], i, n, min;
    int *p;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]); //输入数据
    //利用指针找最小值
    min = a[0]; //@#1 //假设最小值
    //从第二个单元格到最后一个单元格，
    //依次和min比较如果比min小，更新min的值
    for (p = a /*@#2*/; p <= a + n /*@ #3*/; p++ /*@ #4*/)
        if (min > *p /*@ #5*/)
            min = *p /*@ #6*/;
    printf("%d\n", min);
    return 0;
}