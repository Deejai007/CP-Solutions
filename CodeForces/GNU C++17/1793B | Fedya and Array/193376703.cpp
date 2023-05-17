/*~CF~10/10/22:*/
#include <bits/stdc++.h>
#define int long long
#define rd(x) \
    int x;    \
    cin >> x
#define read(x, y) \
    int x, y;      \
    cin >> x >> y
#define all(x) (x).begin(), (x).end()
#define get(a, n)               \
    int a[n];                   \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> a[i];            \
    }
#define fr(a, b) for (int i = a; i < b; i++)
 
using namespace std;
 
#define PI 3.1415926535897932384626433832795l
const int MOD = 1e9 + 7;
 
void solve()
{
    read(x, y);
    if (x >= 0 && y >= 0 || x <= 0 && y <= 0)
    {
        int l = abs(x - y) + 1;
        l += (l - 2);
        cout << l << endl;
        for (int i = min(x, y); i <= max(x, y); i++)
        {
            cout << i << " ";
        }
        for (int i = max(x, y) - 1; i > min(x, y); i--)
        {
            cout << i << " ";
        }
 
        cout << endl;
    }
    else
    {
        int k = x - y;
        k *= 2;
        int a[k];
        int ct = 0;
        for (int i = 0; i < x; i++)
        {
            a[ct] = i;
            ct++;
        }
        for (int i = x - 1; i > y; i--)
        {
            a[ct] = i - 1;
            ct++;
        }
        while (ct < k)
        {
            a[ct] = a[ct - 1] + 1;
            ct++;
        }
        cout << k << endl;
        for (int i = 0; i < k; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
 
        solve();
    }
}