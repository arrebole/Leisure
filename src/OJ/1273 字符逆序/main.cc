#include <iostream>
#include <stack>

using namespace std;

int main()
{
    char i = 0, str[101];
    stack<char> s;
    cin.getline(str, 101);
    while (str[i] != 0)
    {
        s.push(str[i]);
        i++;
    }
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}