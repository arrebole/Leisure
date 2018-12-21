#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
    char a[30], k;
    int len, j = 0;
    gets(a);
    cin >> k;
    len = strlen(a);
    vector<int> index;

    for (int i = 0; i < len; i++)
    {
        if (a[i] == k)
            index.push_back(i);
    }
    for (int i = 0; i < index.size(); i++)
    {
        int t = index[j];
        for (int s = t; s <= len; s++)
        {
            a[s] = a[s + 1];
        }
        j++;
        for (int b = j; b < index.size(); b++)
        {
            index[b]--;
        }
    }
    puts(a);
    return 0;
}