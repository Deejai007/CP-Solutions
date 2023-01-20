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
    int sz = n + 2;
    int a[n + 2];
    for (int i = 0; i < sz; i++)
    {
        cin >> a[i];
    }
    sort(a, a + sz);
    int b[n + 1];
    b[0] = a[0];
    for (int i = 1; i < n + 1; i++)
    {
        b[i] = a[i] + b[i - 1];
    }
    // cout << b[n] << endl;
    if (b[n - 1] == a[n] || b[n - 1] == a[n + 1])
    {
 
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 0; i < n + 1; i++)
    {
        int sm = b[n] - a[i];
        // cout << sm << " ";
        if (sm == a[n + 1])
        {
            // cout << "Y";
            for (int j = 0; j < n + 1; j++)
            {
                if (j == i)
                    continue;
                cout << a[j] << " ";
            }
            cout << endl;
            return;
        }
    }
    cout << -1 << endl;
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