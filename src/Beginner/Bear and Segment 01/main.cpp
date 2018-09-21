#include <iostream>

using namespace std;

string isHave()
{
    string input;
    string result;
    cin >> input;
    int len = input.length();
    int startAndEnd[2] = {-1,-1};

    for (int i = 0; i < len; i++)
    {
        if (input[i] == '1')
        {
            startAndEnd[0] = i;
            break;
        }
    }
    for (int i = len - 1; i > 0; i--)
    {
        if (input[i] == '1')
        {
            startAndEnd[1] = i;
            break;
        }
    }

    if (startAndEnd[0] == -1)
    {
        result = "NO";
        return result;
    }
    for (int i = startAndEnd[0]; i < startAndEnd[1]; i++)
    {
        if (input[i] == '0')
        {
            result = "NO";
            return result;
        }
    }

    result = "YES";
    return result;
}

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        cout << isHave() << endl;
    }
    return 0;
}
