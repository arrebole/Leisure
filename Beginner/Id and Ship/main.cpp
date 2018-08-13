#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    string result[t];

    for (int i = 0; i < t; i++)
    {
        char id;
        cin >> id;

        switch (id)
        {
        case 'B':
        case 'b':
            result[i] = "BattleShip";
            break;

        case 'C':
        case 'c':
            result[i] = "Cruiser";
            break;

        case 'D':
        case 'd':
            result[i] = "Destroyer";
            break;

        case 'F':
        case 'f':
            result[i] = "Frigate";
            break;

        default:
            break;
        }
    }

    for (int j = 0; j < t; j++)
    {
        cout << result[j] << endl;
    }

    return 0;
}
