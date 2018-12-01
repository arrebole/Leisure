#include <stdio.h>
int maxDivisor(int a, int b);
int main()
{
    int num[6],i, divisor;
    for(i=1;i<=5;i++)
        scanf("%d",&num[i]);    //读取输入的5个整数
    divisor= num[1] ;
    for(i=2;i<=5;i++)
	    divisor = maxDivisor(divisor,num[i]);  //依次两两求最大公约数

    printf("The max common divisor is %d", divisor);
    return 0;
}

//@@1
int maxDivisor(int a, int b)
{
    int r;
    while( b != 0)
    {
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}
//@@1