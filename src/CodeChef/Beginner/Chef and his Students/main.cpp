#include <iostream>

using namespace std;

int solve(string stu)
{
    int res = 0;
    int leng = stu.length();
    char temp[leng];
    stu.copy(temp, leng, 0);
    for (int i=0;i<leng;i++)
    {
        if (temp[i]=='>')
        {
            temp[i] = '<';
        }
        else if (temp[i]=='<')
        {
            temp[i] = '>';
        }
        
    }
    
    for(int j=0;j<leng-1;j++)
    {
        if (temp[j]=='>' && temp[j+1]=='<')
        {
            res++;
        }
    }

    return res;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string studs;
        cin >> studs;
        cout << solve(studs) << endl;
    }
    return 0;
}