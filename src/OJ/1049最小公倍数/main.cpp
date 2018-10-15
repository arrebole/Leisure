#include <iostream>

using namespace std;

int main()
{
    int p, q;
    cin >> p >> q;
    
    int min_cm;
    p > q ? min_cm = p : min_cm = q;
    while(true)
    {
        if(min_cm%p==0 && min_cm%q==0)
        {
            break;
        }
        min_cm++;
    }

    cout << min_cm << endl;
    return 0;
}