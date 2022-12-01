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
    read(w, h);
 
    int ans[4];
    rd(x1);
    int a[x1];
    get(a, x1);
    int m1 = a[x1 - 1] - a[0];
    ans[0] = m1 * h;
 
    rd(x2);
    int b[x2];
    get(b, x2);
    int m2 = b[x2 - 1] - b[0];
    ans[1] = m2 * h;
 
    rd(y1);
    int c[y1];
    get(c, y1);
    int m3 = c[y1 - 1] - c[0];
    ans[2] = m3 * w;
 
    rd(y2);
    int d[y2];
    get(d, y2);
    int m4 = d[y2 - 1] - d[0];
    ans[3] = m4 * w;
 
    int mx = 0;
    for (int i = 0; i < 4; i++)
    {
        mx = max(mx, ans[i]); /* code */
    }
    cout << mx << endl;
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