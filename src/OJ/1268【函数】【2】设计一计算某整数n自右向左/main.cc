#include <stdio.h>

int digit(int n,int k);

int main()
{
    int n,k;
    printf("Enter n,k:");
    scanf("%d,%d",&n,&k);
    printf("The result is:%d\n",digit(n,k));
    return 0;
}
//@@1
int digit(int n,int k)
{
    int t,c=1;
    while(n>0)
    {
        t = n % 10;
        n/=10;
        
        if(c==k)
        {
            return t;
        }
        c++;
    }
    return 0;
}
//@@1