#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int t = 0, sum = 0;
    while (true)
    {
        cin >> t;
        if(t==-1)
        {
            break;
        }
        sum += t;
    }
    printf("sum=%d", sum);
    return 0;
}