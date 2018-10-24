#include <iostream>
 
using namespace std;
 
 char change(const char n)
 {
     char newChar = n;
     if(n>='a' && n<='z')
        newChar -=32;
     else if(n>='A' && n<='Z')
        newChar +=32;
     return newChar;
 }

int main()
{
    char a;
    cin >> a;
    cout << change(a)<<endl;
    return 0;
 
}