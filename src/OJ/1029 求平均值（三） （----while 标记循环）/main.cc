#include <iostream>

using namespace std;

int main()
{
    int count = 0, sum = 0, t;
    while (true)
    {
        cin >> t;
        if (t == 999)
            break;
        sum += t;
        count++;
    }
    double avg = (double)sum / count;
    int int_avg = avg;
    if (avg >= (double)int_avg + 0.5)
        int_avg++;
    cout << int_avg << endl;
    return 0;
}