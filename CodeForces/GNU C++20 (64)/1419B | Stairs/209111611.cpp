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
    int i = 0;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    int ans = 0;
    int sm = 0;
    while (1)
    {
        int k = pow(2, i);
        int j = 0;
        int s = 0;
        while (j <= i)
        {
            s += k * pow(2, j);
            j++;
        }
        i++;
        sm += s;
        if (sm > n)
            break;
        ans++;
    }
 
    cout << ans << endl;
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