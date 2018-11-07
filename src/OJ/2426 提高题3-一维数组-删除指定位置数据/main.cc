#include<stdio.h>


int main()
{
    int i,p,a[10]={0,1,2,3,4,5,6,7,8,9};
    scanf("%d",&p);
    //@@1
    for(int j=p+1;j<10;j++)
    {
        a[j-1] = a[j];
    }
    //@@1
    for(i=0;i<=8;i++)
        printf("%d ",a[i]);
    return 0;
}