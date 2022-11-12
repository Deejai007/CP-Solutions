#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        ll a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        ll d1 = a[2] - a[1];
        ll d2 = a[1] - a[0];
        ll d3 = a[2] - a[0];
        if (d1 <= 1 && d2 <= 1)
        {
            cout << "0" << endl;
        }
        else if (d1 <= 1 || d2 <= 1)
        {
            cout << (a[2] - a[0] - 2) * 2 << endl;
        }
        else
        {
            cout << (d1 + d2 + d3) - 4 << endl;
        }
    }
    return 0;
}