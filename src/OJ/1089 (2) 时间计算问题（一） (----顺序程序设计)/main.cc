#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main()
{
    int n,a,b,c;
    cin >> n;
    a = n/3600;
    b = n%3600/60;
    c = n%60;
    printf("%d:%d:%d",a,b,c);
    return 0;
 
}