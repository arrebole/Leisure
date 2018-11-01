#include <stdio.h>
int main()
{
    int x, y, z;
    scanf("%d", &x);
    if (x % 10 == 0)
    {
        y = x;
        z = x;
        printf("y=%d\nz=%d\n", y, z);
    }
    
    else
    {
        y = x * 2;
        z = x * 3;
        printf("y=%d\nz=%d\n", y, z);
    }
    return 0;
}