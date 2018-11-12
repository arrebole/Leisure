#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main()
{
    int a, b;
    cin >> a >> b;
    printf("(%d)\n", a + b);
    printf("(%d)\n", a - b);
    printf("(%d)\n", a * b);
    printf("(%d,%d)\n", a / b, a % b);
    return 0;
 
}