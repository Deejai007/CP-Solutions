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
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
 
    if (b >= 0)
    {
        int ans = n * (a + b);
        cout << ans << endl;
        return;
    }
    else
    {
        int mxi = 0, pos = 0;
        int ans = 0;
 
        pos = 0;
        mxi = 0;
        for (int i = 0; i < n; i++)
        {
            int st = 0;
            if (s[i] == s[i + 1])
            {
                i++;
                while (s[i] == s[i + 1])
                {
                    i++;
                }
            }
            // mxi = (i + 1 - st);
            pos++;
        }
        int d = ((pos) / 2) + 1;
        ans = a * n + (d) * (b);
        cout << ans << endl;
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