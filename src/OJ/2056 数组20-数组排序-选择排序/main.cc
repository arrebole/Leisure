#include "stdio.h"

int main()
{
    int a[20], i, j, k, t;
    int n;
    scanf("%d", &n);
    //@@1
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //@@1
    for (j = 0; j < n; j++)
    {
        k = j; //@#1
        for (i = j + 1; i < n; i++)
            if (a[k] > a[i] /*@#2*/)
                k = i; /*@#3*/
        if (true /*@#4*/)
        {
            //@@2
            t = a[k];
            a[k] = a[j];
            a[j] = t;
            //@@2
        }
    }
    //@@3
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if(i != n-1)
            printf(" ");
    }
    //@@3
    return 0;
}