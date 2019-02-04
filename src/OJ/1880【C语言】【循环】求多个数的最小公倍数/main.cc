#include <stdio.h>

int gbs(int a,int b);

int main()
{
    int n;
    scanf("%d",&n);
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int g=1,b=1;
    for(int i=0;i<n;i++){
        g = gbs(b,a[i]);
        b = b*a[i]/g;
    }
    printf("%d",b);
    
    delete[] a;
    return 0;
}
int gbs(int m, int n)
{
    int r;
    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    return m;
}