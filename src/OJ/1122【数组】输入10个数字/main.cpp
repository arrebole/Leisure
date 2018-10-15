#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n = 10;
    stack<int> st;
    while (n--)
    {
        int temp;
        cin >> temp;
        st.push(temp);
    }
    for (int i = 0; i < 10; i++)
    {
        cout << st.top();
        st.pop();
        if (i != 9)
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}