#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int t;
    int a = 0, b = 0, c = 0;
    while (cin >> t)
    {
        if (t <= 0)
            break;
        if (t >= 85)
            a++;
        else if (t < 60)
            c++;
        else
            b++;
    }
    printf(">=85:%d\n", a);
    printf("60-84:%d\n", b);
    printf("<60:%d\n", c);
    return 0;
}