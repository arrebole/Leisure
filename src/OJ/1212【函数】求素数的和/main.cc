//@@1
#include <stdio.h>

int is_sushu(int n);

int main()
{
    int n, m;
    int sum = 0;
    scanf("%d %d", &n, &m);
    for (int i = n; i <= m; i++)
    {
        if (is_sushu(i) == 1)
            sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
//@@1

int is_sushu(int n)
{
    //@@2
    if (n <= 1)
        return -1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return -1;
    }
    return 1;
    //@@2
}