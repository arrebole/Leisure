#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    int *a = new int[20];
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", a + i);
    }

    for (int i = 0; i < 20; i++)
    {
        for (int j = i+1; j < 20; j++)
        {
            if (a[j] % a[i] == 0)
            {
                vec.push_back(a[j]);
                a[j] = 1;
            }
            if (a[i] % a[j] == 0)
            {
                vec.push_back(a[i]);
            }
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        printf("%d\n", vec[i]);
    }

    delete[] a;
    return 0;
}