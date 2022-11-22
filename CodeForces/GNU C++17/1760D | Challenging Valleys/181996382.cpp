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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 1;
    for (int i = 0; i < n - 1 && ans == 1; i++)
    {
        if (a[i] < a[i + 1])
        {
 
            ans = 0;
            while (a[i + 1] >= a[i] && i < (n - 1))
            {
                i++;
            }
            if (i == n - 1)
            {
                cout << "YES" << endl;
                return;
            }
            // else
            // {
            // cout << "NO" << endl;
            // return;
 
            // }
        }
    }
    if (ans == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
 
    // int start = 0;
 
 
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