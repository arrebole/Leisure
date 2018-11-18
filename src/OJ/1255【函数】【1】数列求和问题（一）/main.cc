#include <stdio.h>

/*@#1*/ int sum(int n);

int main()
{
    int n, r = 0;
    scanf("%d", &n);
    /*@#2*/ r = sum(n);
    printf("%d\n", r);
    return 0;
}

//@@1
int sum(int n)
{
    int r = 0;
    for (int i = 1; i <= n; i++)
    {
        r += i;
    }
    return r;
}
//@@1