#include <iostream>
#include <stdio.h>

using namespace std;

double m_abs(double n)
{
    if(n<0)
        n =-n;
    return n;
}


int main()
{
    double x;
    cin >>x;
    if(x>0 && x<3)
    {
        printf("%.2lf",(x+1)/(x+2));
    }else if(x>=-5&& x<=0)
    {
        printf("%.2lf",x+x*x+x*x*x);
    }
    else
    {
        printf("%.2lf",m_abs(x)+1);
    }
    return 0;
 
}