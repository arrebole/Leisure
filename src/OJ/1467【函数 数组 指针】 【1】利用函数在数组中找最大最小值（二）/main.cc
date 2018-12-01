#include <stdio.h>

void inputarray(int a[],int n);
int sumarray(int a[],int n,int *max);

int main()
{
    int b[100];
    int m,n,k;
    scanf("%d",&k);
    inputarray(b,k);
    n=sumarray(b,k,&m);
    printf("max=%d,min=%d\n",m,n);
    return 0;
}

void inputarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
//@@1
int sumarray(int a[],int n,int *max)
{
    int min = a[0];
    *max = a[0];
    for(int i=0;i<n;i++)
    {
        if(min>a[i])
            min = a[i];
        if(*max <a[i])
            *max = a[i];
    }
    return min;
}

//@@1