#include"stdio.h"
#include"string.h"
int gcd(int m,int n);  //求最大公约数函数
main()
{
    int a,b,temp;
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }//确保a较大，从而使得传入到gcd(m,n)时，m较大
    printf("%d",gcd(a,b));     //调用gcd函数并将结果输出
}
int gcd(int m,int n)
{ 
    if(n==0) return m;//@#1    //简单情况
    return  gcd(n,m%n); //@#2    //递归调用
}