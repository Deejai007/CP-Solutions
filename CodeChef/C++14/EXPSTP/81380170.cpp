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
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> x2 >> y1 >> y2;
    int m1 = min(x1 - 1, n - x1);
    int m2 = min(x2 - 1, n - x2);
    int gg = min(m1, m2);
    int mm1 = min(y1 - 1, n - y1);
    int mm2 = min(y2 - 1, n - y2);
    int ggm = min(mm1, mm2);
    // int p1 = min(x1, n - x2);
    // int p2 = min(y1, n - y2);
    int pp = gg + ggm + 2;
    int kk = abs(x1 - y1) + abs(x2 - y2);
    // int gg = m1 + n - m2;
    int tt = min(kk, pp);
    cout << tt << endl;
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
