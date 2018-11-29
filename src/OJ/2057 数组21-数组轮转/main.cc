#include <iostream>
#include <stdio.h>

using namespace std;

void printArray(int a[], int start);

int main()
{
    int a[12];
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
        a[i + 6] = a[i];
    }

    for (int i = 0; i < 6; i++)
    {
        printArray(a, i);
        printf("\n");
    }
    return 0;
}

void printArray(int a[], int start)
{
    int end = start + 6;
    for (int i = start; i < end; i++)
    {
        printf("%d ", a[i]);
    }
}