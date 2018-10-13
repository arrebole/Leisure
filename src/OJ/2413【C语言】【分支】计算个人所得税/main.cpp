#include <iostream>
#include <stdio.h>

using namespace std;

void prt(double n)
{
    printf("%.2lf", n);
}

void handle(double n)
{
    double t1 = (2500 - 1600) * 0.05;
    double t2 = (3500 - 2500) * 0.1;
    double t3 = (4500 - 3500) * 1.5;
    double temp;
    if(n<=1600)
    {
        prt(n);
    }
    if(n>1600&&n<=2500)
    {
        temp = (n - 1600) * 0.05;
        prt(temp);
    }
    if(n>2500&&n<=3500)
    {
        temp = (n - 2500) * 0.1;
        prt(temp + t1);
    }
    if(n>3500&& n<=4500)
    {
        temp = (n - 3500) * 0.15;
        prt(temp + t1 + t2);
    }
    if(n>4500)
    {
        temp = (n - 4500) * 0.2;
        prt(temp + t1 + t2 + t3);
    }
}


int main()
{
    double money;
    cin >> money;
    handle(money);
    return 0;
}