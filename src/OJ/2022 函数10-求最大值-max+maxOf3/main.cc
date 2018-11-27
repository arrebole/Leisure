#include <stdio.h>

int maxOf3(int a, int b, int c);//@#1
int max(int a, int b);//@#2

int main()
{
    int x, y, z, maxNum;
    scanf("%d %d %d", &x, &y, &z);
    maxNum = maxOf3(x,y,z);//@#3                    //调用maxOf3，求出x,y,z中的最大值
    printf("number %d is the biggest one.\n",maxNum);
    return 0;
}
int maxOf3(int a, int b, int c)
{
    int result;
    result = max(a,b);//@#4        //函数还可以互相调用，调用max函数，先求出a,b之间的最大值。
    result = max(result,c);//@#5        //再次调用max函数，求出a,b,c中的最大值。	
    return result;
}
int max(int a, int b)
{
    int result;
    //@@1
    a>b?result=a:result=b;
    //@@1                     //求出a,b之间的最大值，并且将此值赋予result
    return result;          
}