#include <iostream>

using namespace std;

string isLifeMatters()
{
    string a = "#coderlifematters";
    string b = "#allcodersarefun";

    string date;
    getline(cin,date);
    int len = date.length();
    int count = 0;

    for (int i=0;i<len;i++)
    {
        if(date[i] == '1')
        {
            count++;
        }
        if(count > 5)
        {
            return a;
        }
        if(date[i] == '0')
        {
            count = 0;
        }
    }

    return b;

}


int main()
{
    string test;
    getline(cin,test);
    int intTest = atoi(test.c_str());
    while(intTest--)
    {
        cout << isLifeMatters() << endl;
    }
    return 0;
}
