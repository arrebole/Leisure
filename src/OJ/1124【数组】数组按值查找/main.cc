#include <iostream>

using namespace std;

void search(int a[],int key)
{
    int index = -1;
    for (int i = 0; i < 15;i++)
    {
        if(a[i]==key)
        {
            index = i;
            break;
        }
    }
    if(index==-1)
        cout << "NO"<<endl;
    else
        cout << index << endl;
}

int main()
{
    int a[15];
    for (int i = 0; i < 15;i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;
    search(a, key);
    return 0;
}