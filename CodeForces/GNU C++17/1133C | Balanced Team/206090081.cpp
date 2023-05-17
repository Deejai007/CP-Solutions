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
 
#define PI 3.14159265358979323846264338327951
const int MOD = 1e9 + 7;
 
void solve()
{
    rd(n);
    get(a, n);
    map<int, int> m;
 
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        m[a[i]] = i + 1;
    }
 
    int ans = 0;
    int l = 0;
    int tt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
 
            int ct = m[a[i] + j] - i;
            ans = max(ans, ct);
        }
    }
    cout << ans << endl;
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    //  cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
 
        solve();
    }
}