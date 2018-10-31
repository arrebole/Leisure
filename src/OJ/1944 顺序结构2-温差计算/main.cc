#include <iostream>
 
using namespace std;
 
int main()
{
    int a, b;
    cin >> a >> b;
    int cach = a - b;
    cach > 0 ? cach = cach : cach = -cach;
    cout << cach << endl;
    return 0;
 
}