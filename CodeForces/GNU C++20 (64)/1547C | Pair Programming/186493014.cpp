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
    int n, m, k;
    cin >> k >> n >> m;
    int a[n];
    int b[m];
    int c0 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (!a[i])
            c0++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        if (!b[i])
            c0++;
    }
    int ans[(n + m)];
    int y = 0;
    int len = k;
    int i = 0, j = 0;
    int ex = 0;
    while (i < n || j < m)
    {
        int a1 = i, a2 = j;
        // ex = 0;
        bool update = false;
        while (i < n)
        {
            if (a[i] > len)
            {
                // ex++;
                break;
            }
            else if (a[i] == 0)
            {
 
                len++;
            }
 
            ans[y++] = a[i++];
            update = true;
 
            // cout << i << "Q" << endl;
        }
 
        while (j < m)
        {
            if (b[j] > len)
            {
                // ex++;
                break;
                // cout << j << "J" << endl;
            }
            else if (b[j] == 0)
 
                len++;
 
            update = true;
            ans[y++] = b[j++];
        }
 
        // if ((a1 == i && a2 == j) || (a2 == m - 1 && a1 == i) || (a1 == n - 1 && a2 == j))
        // {
        //     cout << -11 << endl;
        //     return;
        // }
        if (update == false)
        {
            cout << -1 << endl;
            return;
        }
    }
    if (y < (n + m))
    {
        cout << -1 << endl;
        return;
    }
    for (int h = 0; h < y; h++)
    {
        cout << ans[h] << " ";
    }
 
    cout << "\n";
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