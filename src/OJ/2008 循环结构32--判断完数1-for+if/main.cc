#include <iostream>
#include <vector>

using namespace std;

int factorSum(int n)
{
    int sum = 1;
    vector<int> nums;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0)
        {
            nums.push_back(i);
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    if (n == factorSum(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}