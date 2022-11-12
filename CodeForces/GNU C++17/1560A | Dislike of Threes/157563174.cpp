#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    int z = 0;
    cin >> q;
    int arr[1000];
    for (int i = 1; i < 2000; i++)
    {
        if ((i % 3 == 0) || (i % 10 == 3))
        {
            continue;
        }
        arr[z] = i;
        z++;
        if (z > 1000)
            break;
    }
    int num;
    while (q--)
    {
        cin >> num;
        cout << arr[num - 1] << endl;
    }
    return 0;
}