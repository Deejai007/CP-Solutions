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
    int n, x, c;
    cin >> n >> x >> c;
    int a[n];
    int sm = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sm += a[i];
    }
    int mx = sm;
    sort(a, a + n);
    int spend = 0;
    for (int i = 0; i < n; i++)
    {
        a[i] = x;
        int tmp = 0;
        for (int j = 0; j < n; j++)
        {
            tmp += a[j];
        }
        spend += c;
        int ans = tmp - spend;
        // cout << ans << "Q" << endl;
        mx = max(mx, ans);
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
