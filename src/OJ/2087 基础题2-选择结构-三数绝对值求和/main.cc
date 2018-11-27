#include <stdio.h>
int main()
{
    int x, y, z, sum = 0;
    //@@1
    scanf("%d %d %d", &x, &y, &z);
    sum += (x > 0 ? x : -x);
    sum += (y > 0 ? y : -y);
    sum += (z > 0 ? z : -z);
    //@@1
    printf("%d\n", sum);
    return 0;
}
