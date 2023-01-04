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
    if (n == 3)
    {
        cout << "NO" << endl;
        return;
    }
    if (n % 2 == 0)
    {
        cout << "YES" << endl;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                a[i] = -1;
            }
            else
                a[i] = 1;
 
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        int an = (n - 3) / 2;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                cout << -an << " ";
            else
                cout << (an + 1) << " ";
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