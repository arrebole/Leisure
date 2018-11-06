#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    double sum =0;
    cin >>n;
    for(double i=1;i<n;i++)
    {
        sum+= 1/i;
    }
    printf("sum=%.5lf",sum);
    return 0;
 
}