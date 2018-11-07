#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main()
{
    int time;
    cin >> time;
    
    int h = time/3600;
    time -= h*3600;

    int m = time/60;
    time -=m*60;

    printf("%02d:%02d:%02d\n",h,m,time);
    return 0;
 
}