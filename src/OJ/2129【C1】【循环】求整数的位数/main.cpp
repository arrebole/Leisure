#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = 1;
    int count = 0;
    while(n/k !=0)
    {
        count++;
        k *= 10;
    }
    cout << count << endl;
    return 0;
}