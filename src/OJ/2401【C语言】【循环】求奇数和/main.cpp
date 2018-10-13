#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int temp = 0;
    while(true)
    {
        cin >> temp;
        if(temp<0)
            break;
        if(temp%2 !=0)
            sum += temp;
    }
    cout << sum << endl;
    return 0;

}