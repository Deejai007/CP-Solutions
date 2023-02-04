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
    int n, m, d;
    cin >> n >> m >> d;
    int a[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]] = i;
    }
    int b[m];
    int minmv = INT_MAX;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < m - 1; i++)
    {
        int dif = mp[b[i + 1]] - mp[b[i]];
        if (dif < 0)
        {
            cout << 0 << endl;
            return;
        }
 
        int kk = d + 1;
        int dif2 = kk - dif;
        // cout << dif2 << "Q" << endl;
        if (dif2 + dif >= n)
        {
            dif2 = dif + 1;
        }
        dif = min(dif, dif2);
 
        minmv = min(minmv, dif);
    }
    if (minmv < 0)
        minmv = 0;
    cout << minmv << endl;
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