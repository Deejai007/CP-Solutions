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
#define fr(a, b) for (int j = a; j < b; j++)
 
using namespace std;
 
#define PI 3.1415926535897932384626433832795l
const int MOD = 1e9 + 7;
 
void solve()
{
    read(n, m);
    get(a, n);
    get(b, m);
    sort(b, b + m);
    int c[n] = {0};
    int k = 0;
    int d[n];
    for (int i = 0; i < n; i++)
    {
        d[i] = a[i];
    }
    sort(d, d + n);
 
    for (int i = 0; i < m; i++)
    {
        c[b[i] - 1] = 1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (c[i] == 1)
        {
            int j = i + 1;
            while (c[j] == 1)
            {
                j++;
            }
            sort(a + i, a + j + 1);
            i = j;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != d[i])
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