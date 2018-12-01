#include <iostream>

int sum(int a,int k,int n);

using namespace std;
 
int main()
{
    int a,k,n;
    cin >> a >> k >> n;
    cout << sum(a,k,n)<<endl;
    return 0;
 
}

int sum(int a,int k,int n)
{
    return a*n+(n-1)*n*k/2;    
}