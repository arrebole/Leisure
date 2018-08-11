#include <iostream>

using namespace std;

int main()
{
    int time;
    cin >> time;

    for (int i = 0; i < time; i++)
    {
        int input;
        cin >> input;
        int x = (int)(input / 2);
        cout << 1 << " " << 1;
        for (int j=0; j < x; j++)
        {
            cout << "0";
        }
        cout << endl;
    }
    return 0;
}
