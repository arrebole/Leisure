#include <iostream>

using namespace std;

void draw(int p, int len)
{
    int space = (len - p) / 2;
    for (int i = 1; i < len; i++)
    {
        if (space > 0)
        {
            cout << " ";
            space--;
        }
        cout << "*";
    }
    cout << endl;
}

// 绘制等腰梯形
void Trapezoid(int n)
{
    int top = n;
    int end = n + (n - 1) * 2;
    for (int i = top; i <= end; i += 2)
    {
        draw(i, end);
    }
}

int main()
{
    int n;
    cin >> n;
    Trapezoid(n);
    return 0;
}