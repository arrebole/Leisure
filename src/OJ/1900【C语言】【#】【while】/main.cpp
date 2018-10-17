#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int sum = 0,j=0, temp=0;
    while(true)
    {
        cin >> temp;
        if(temp==-1)
            break;
        sum += temp;
        j++;
    }
    double avg = (double)sum / j;
    printf("%.2lf\n", avg);
    return 0;
}