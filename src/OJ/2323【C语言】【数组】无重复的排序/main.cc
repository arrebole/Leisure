#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    while (true)
    {
        int temp;
        cin >> temp;
        if (temp == 0)
            break;
        a.push_back(temp);
    }
    int bucket[101] = {0};
    for (int i = 0; i < a.size();i++)
    {
        bucket[a[i]]++;
    }
    for (int i = 0; i < 101;i++)
    {
        if(bucket[i]>0)
            cout << i << endl;
    }
    return 0;
}