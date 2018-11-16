#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, t, maxNum, maxIndex = 0;
    cin >> n;
    cin >> maxNum;
    for (int i = 1; i < n; i++)
    {
        cin >> t;
        if (t > maxNum)
        {
            maxNum = t;
            maxIndex = i;
        }
    }
    printf("max number is %d\n", maxNum);
    printf("max number pos is %d", maxIndex);
    return 0;
}