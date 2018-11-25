#include <stdio.h>

int *max(int *x, int *y);

int main()
{
    int a, b, *p;
    scanf("%d%d", &a, &b);
    p = max(&a, &b /*@#1*/); //让p指向较大值
    printf("%d\n", *p);
    return 0;
}

int *max(int *x, int *y)
{
    int temp1, temp2;
    temp1 = *x;
    temp2 = *y;
    if (temp1 > temp2)
        return x /*@ #2*/; //候选答案: 1. &temp1  2. x  3. &temp2  4. y
    else
        return y /*@ #3*/; //候选答案: 1. &temp1  2. x  3. &temp2  4. y
}