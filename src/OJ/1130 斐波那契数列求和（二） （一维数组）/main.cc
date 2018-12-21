#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main()
{
    int n,sum=0;
    cin >> n;
    int *a = new int[n+1];
    a[1] = 1;
    a[2] = 1;
    for(int i = 3;i<=n;i++)
    {
        a[i] = a[i-1] + a[i-2];
    }

    for(int i=1;i<=n;i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
 
}