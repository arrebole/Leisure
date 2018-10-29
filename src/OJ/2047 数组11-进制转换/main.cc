#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> a;
    cout << n << "D=";
    while(n>0)
    {
        int t = n % 2;
        a.push(t);
        n = n / 2;
    }
    while(!a.empty())
    {
        cout << a.top();
        a.pop();
    }
    cout <<"B"<< endl;
    return 0;
}