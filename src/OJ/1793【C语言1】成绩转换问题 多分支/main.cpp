#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n<60)
        cout << "������"<<endl;
    if(n>=90)
        cout << "��"<<endl;
    if(n>=80&&n<90)
        cout << "��" << endl;
    if(n>=70&&n<80)
        cout << "�е�" << endl;
    if(n>=60&&n<70)
        cout << "����" << endl;
    return 0;
}