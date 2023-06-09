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
    rd(n);
    get(a, n);
    int c1 = 0;
    int c0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i])
            c1++;
        else
            c0++;
    }
 
    if (c1 == n)
    {
        cout << n - 1 << endl;
        return;
    }
    if (c0 == n)
    {
        cout << n << endl;
        return;
    }
    int x = 0;
 
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int ct1 = 0;
            int ct2 = 0;
            for (int k = i; k <= j; k++)
            {
                if (a[k] == 0)
                    ct1++;
                else
                    ct2++;
            }
            ct1 += c1;
            ct1 -= ct2;
            x = max(x, ct1);
        }
    }
    cout << x << endl;
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
 
        solve();
    }
}