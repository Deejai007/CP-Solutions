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
    char a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'R')
            ct++;
    }
    // cout << ct << "T" << endl;
    if (ct == 0 || ct == n)
    {
        cout << "-1" << endl;
        return;
    }
 
    int ri = -1;
    int li = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'R')
        {
            ri = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 'L')
        {
            li = i;
            break;
        }
    }
    // if (li == -1 || ri == -1)
    // {
    //     cout << -1 << endl;
    //     return;
    // }
 
    if (ri < li)
    {
        cout << 0 << endl;
        return;
    }
 
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == 'L' && a[i + 1] == 'R')
        {
            cout << i + 1 << endl;
        }
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