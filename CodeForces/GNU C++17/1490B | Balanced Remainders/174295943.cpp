#include <bits/stdc++.h>
using namespace std;
int main()
{
 
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        int a[n];
        int mxt, x = 0, y = 0, z = 0;
        int k = n / 3;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 3 == 0)
            {
                x++;
            }
            else if (a[i] % 3 == 1)
            {
                y++;
            }
            else
                z++;
        }
        int ct = 0;
        while (!(z == k && y == k && z == k))
        {
            if (z > x)
            {
                z--;
                x++;
                ct++;
                continue;
            }
            if (x > y)
            {
                y++;
                x--;
                ct++;
                continue;
            }
 
            if (y > z)
            {
                y--;
                z++;
                ct++;
                continue;
            }
        }
 
        cout << ct << endl;
    }
    return 0;
}