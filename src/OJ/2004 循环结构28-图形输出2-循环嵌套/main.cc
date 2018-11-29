#include <iostream>
#include <stdio.h>

using namespace std;

void printStar(int n);
void printSpace(int n);

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        printSpace(n - i);
        printStar(i);
        printf("\n");
    }
    return 0;
}

void printStar(int n)
{
    for (int i = 0; i < n;i++)
    {
        printf("*");
    }
}
void printSpace(int n)
{
    for (int i = 0; i < n;i++)
    {
        printf(" ");
    }
}