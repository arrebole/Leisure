#include <iostream>
 
using namespace std;
 
void selection_sort(int a[],int len)
{
    for(int i=0;i<len;i++)
    {
        int t = i;
        for(int j=i+1;j<len;j++)
        {
            if(a[j]<a[t])
                t = j;
        }
        int temp = a[i];
        a[i] = a[t];
        a[t] = temp;
    }
}

int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        cin >> a[i];
    }
    selection_sort(a,10);
    for(int i=0;i<10;i++)
    {
        cout << a[i];
        if(i !=9)
            cout<< " ";
    }
    cout <<endl;
    return 0;
 
}