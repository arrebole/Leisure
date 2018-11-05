#include <iostream>
 
using namespace std;
 
int main()
{
    int x,y;
    cin >> x>>y;
    int fn = 3*x*x*x+2*x*x*y+4*x*y*y+3*y*y*y+4;
    cout << fn<<endl;
    return 0;
 
}