#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    vector<int> vt;
    cin >> n;
    while (n > 0)
    {
        vt.push_back(n % 10);
        n /= 10;
    }

    printf("%d\n", vt.size());
    for (int i = vt.size() - 1; i >= 0; i--)
    {
        printf("%d ", vt[i]);
    }
    printf("\n");
    
    for (int i = 0; i < vt.size(); i++)
    {
        printf("%d", vt[i]);
    }
    printf("\n");
    
    return 0;
}