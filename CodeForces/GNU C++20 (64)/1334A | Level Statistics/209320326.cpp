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
#define get(a, n)                  \
    int a[n];                      \
    for (int gg = 0; gg < n; gg++) \
    {                              \
        cin >> a[i];               \
    }
#define fr(i, n) for (int i = 0; i < n; i++)
 
using namespace std;
 
#define PI 3.1415926535897932384626433832795l
const int MOD = 1e9 + 7;
 
void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    // cout << 'j';
    if (a[0] < b[0])
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        int play = a[i] - a[i - 1];
        int clr = b[i] - b[i - 1];
        if (a[i] < a[i - 1] || b[i] < b[i - 1] || a[i] < b[i] || clr > play)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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