#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 90)
        cout << "A" << endl;
    if (n < 60)
        cout << "E" << endl;
    if (n >= 60 && n <= 69)
        cout << "D" << endl;
    if (n >= 70 && n <= 79)
        cout << "C" << endl;
    if (n >= 80 && n <= 89)
        cout << "B" << endl;

    return 0;
}