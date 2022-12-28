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
    rd(n);
    int a[n];
    // int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ct = a[0];
    sort(a + 1, a + n);
    // cout << a[n - 1] << endl;
 
    for (int i = 1; i < n; i++)
    {
        if (ct >= a[i])
            continue;
        ct += ((a[i] + 1 - ct) / 2);
        // cout << ct << "Q" << i << endl;
    }
 
    cout << ct << endl;
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