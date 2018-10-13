#include <iostream>

using namespace std;

int main(void)
{
    int N, count = 0;
    cin >> N;
    while (N--)
    {
        int input[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> input[i];
            if (input[i] == 1)
                count++;
        }

        switch (count)
        {
        case 5:
            cout << "Jeff Dean" << endl;
            break;
        case 4:
            cout << "Hacker" << endl;
            break;
        case 3:
            cout << "Senior Developer" << endl;
            break;
        case 2:
            cout << "Middle Developer" << endl;
            break;
        case 1:
            cout << "Junior Developer" << endl;
            break;
        case 0:
            cout << "Beginner" << endl;
            break;
        default:
            break;
        }
        count =0;
    }

    return 0;
}