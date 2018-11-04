#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main()
{
    int n,t,i=0,sum=0;
    double avg;

    cin >> n;
    while(i<n)
    {
        cin >>t;
        sum+=t;
        i++;
    }
    avg = (double)sum/n;
    printf("%.2lf",avg);
    return 0;
 
}