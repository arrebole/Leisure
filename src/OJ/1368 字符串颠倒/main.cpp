#include <iostream>
#include <stack>

using namespace std;

int main()
{
    char a[256];
    cin.getline(a, 256);
    stack<char> st;
    int j = 0;
    while(a[j] !=0)
    {
        st.push(a[j]);
        j++;
    }
    for (int i = 0; i < j;i++)
    {
        cout << st.top();
        st.pop();
    }
    cout << endl;
    return 0;
}