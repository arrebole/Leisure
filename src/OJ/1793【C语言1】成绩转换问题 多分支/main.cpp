#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n<60)
        cout << "不及格"<<endl;
    if(n>=90)
        cout << "优"<<endl;
    if(n>=80&&n<90)
        cout << "良" << endl;
    if(n>=70&&n<80)
        cout << "中等" << endl;
    if(n>=60&&n<70)
        cout << "及格" << endl;
    return 0;
}