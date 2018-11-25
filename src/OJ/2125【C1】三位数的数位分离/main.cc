#include <iostream>
#include <stdio.h>

using namespace std;
 
int main()
{
    char a[4];
    gets(a);
    printf("%c %c %c\n", a[2], a[1], a[0]);
    return 0;
 
}