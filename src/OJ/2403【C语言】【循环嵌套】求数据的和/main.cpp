// 抽离字符串中的数字并求和

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums;
    char a[1002] = {0};
    int cnt_int = 0;

    cin.getline(a, 1002);
    for (int i = 0; i<1002; i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            cnt_int *= 10;
            cnt_int += a[i] - '0';
        }
        else
        {
            if(cnt_int !=0){
                nums.push_back(cnt_int);
                cnt_int = 0;
            }   
            
        }
    }

    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    cout << sum << endl;
    return 0;
}