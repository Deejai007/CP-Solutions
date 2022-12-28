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
    string s;
    cin >> s;
    int len = s.length();
    string ans = s;
    for (int i = len - 1; i > 0; i--)
    {
        int num = (s[i - 1] - '0') + (s[i] - '0');
        if (num > 9)
        {
            ans[i - 1] = '0' + num / 10;
            ans[i] = '0' + num % 10;
            cout << ans << endl;
            return;
        }
    }
 
    int nm = (s[0] - '0') + (s[1] - '0');
    s.erase(s.begin() + 1);
    s[0] = '0' + nm;
    cout << s << endl;
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