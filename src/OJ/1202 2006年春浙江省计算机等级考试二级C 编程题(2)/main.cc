#include <iostream>
#include <stdio.h>

using namespace std;

long long int fact(int n)
{
    long long int f = 1;
    for(int i=1;i<=n;i++)
    {
        f*=(long long int)i;
    }
    return f;
} 
int main()
{
    int n;
    double sum =0;
    cin >>n;
    for(double i=1;i<=n;i++)
    {
        sum+= (double)1/fact(i);
    }
    printf("sum=%.5lf",sum);
    return 0;
 
}