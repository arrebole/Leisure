#include <stdio.h>

int min(int a, int b, int c);

int main()
{
    int test;
    scanf("%d", &test);

    while (test--)
    {
        int a, b, c, x, y;
        int minPile, minXY;
        scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);
        if ((a + b + c) != (x + y))
        {
            printf("NO\n");
            continue;
        }
        minXY = (x > y) ? y : x;
        minPile = min(a, b, c);

        if (minXY < minPile)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}

int min(int a, int b, int c)
{
    int temp = a;
    int minBC = (b > c) ? c : b;
    if (temp > minBC)
    {
        temp = minBC;
    }
    return temp;
}