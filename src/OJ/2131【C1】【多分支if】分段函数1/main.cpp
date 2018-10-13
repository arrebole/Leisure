#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n<1){
        cout << n <<endl;
    }
    if(n>=1&&n<10)
    {
        cout << 3*n-1 <<endl;
    }
    if(n>=10)
    {
        cout << 4*n -2 << endl;
    }
    return 0;
}