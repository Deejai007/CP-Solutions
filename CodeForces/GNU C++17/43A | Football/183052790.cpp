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
    int n;
    cin >> n;
    int x = 0, y = 0;
    string s, s1, s2;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (i == 0)
        {
            s1 = s;
            x++;
        }
        if (s == s1)
        {
            x++;
        }
        else
        {
            y++;
            s2 = s;
        }
    }
    if (x > y)
    {
        cout << s1 << endl;
    }
    else
        cout << s2 << endl;
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
 
        solve();
    }
}