#include <bits/stdc++.h>

using namespace std;

int main()
{
    int result = 0;
    int testCase;
    int k;
    scanf("%d %d",&testCase,&k);
    while (testCase--)
    {
        int input;
        scanf("%d",&input);
        if (input % k == 0)
        {
            result++;
        }
    }
    printf("%d\n", result);

    return 0;
}