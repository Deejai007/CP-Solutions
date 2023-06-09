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
    int n;
    cin >> n;
    int a[n];
    int cte = 0;
    int cto = 0;
    int mxe = INT_MAX;
    int mxo = INT_MAX;
    int mx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] & 1)
        {
            cto++;
            mxo = min(a[i], mxo);
        }
        else
        {
            cte++;
            mxe = min(a[i], mxe);
        }
        mx = min(a[i], mx);
    }
    if (cte == 0 || cte == n)
    {
        cout << "YES" << endl;
        return;
    }
    int ao = 1;
    int ae = 1;
    if (cto > 0)
    {
        if (mxo >= mxe)
            ae = 0;
    }
    if (mxe <= mxo)
    {
        ao = 0;
    }
    if (ao && ae)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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