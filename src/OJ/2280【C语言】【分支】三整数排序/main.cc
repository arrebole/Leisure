#include <iostream>
#include <stdio.h>

using namespace std;

void sort(int a[3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2-i; j++)
        {
            if (a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a);
    printf("%d %d %d\n", a[0], a[1], a[2]);
    return 0;
}