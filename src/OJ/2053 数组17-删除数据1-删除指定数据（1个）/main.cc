#include <iostream>
 
using namespace std;
 
int main()
{
    int n,value;
    cin >> n >> value;
    int *a = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int index;
    for(index = 0; index < n; index++)
    {
        if(a[index]==value)
            break;
    }
    for(int i=index;i<n-1;i++)
    {
        a[i] = a[i+1];
    }
    for(int i=0;i<n-1;i++)
    {
        cout << a[i];
        if(i != n-1)
            cout << " ";
    }
    delete[] a;
    return 0;
 
}