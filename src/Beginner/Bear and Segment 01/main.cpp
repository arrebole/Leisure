#include <iostream>

using namespace std;

class Solution
{
  public:
    void isHave(string s)
    {
        bool start = false;
        int flag = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]=='1' && flag== 0)
            {
                start = true;
            }
            if (start && s[i]='0')
            {
                
            }
        }
        cout << "yes" << endl;
    }
};

int main()
{
    int test;
    Solution solution;
    cin >> test;

    while (test--)
    {
        string s;
        cin >> s;
        solution.isHave(s);
    }
    return 0;
}