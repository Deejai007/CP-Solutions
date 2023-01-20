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
    int a[n][n];
    int x = 1;
    int y = n * n;
    int cg = 1;
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (cg == 1)
            {
                a[i][j] = x++;
                cg = 0;
                continue;
            }
            a[i][j] = y--;
            cg = 1;
        }
        // if (n % 2 == 0)
        //     cg = cg == 0 ? 1 : 0;
    }
    if (n & 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        // cout << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
            continue;
        }
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    // cout << endl;
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