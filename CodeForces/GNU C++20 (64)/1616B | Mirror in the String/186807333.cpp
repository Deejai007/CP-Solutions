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
    rd(n);
    string s, ans;
    cin >> s;
    string gg = s;
    gg += s;
    if (s[0] == s[1])
    {
        cout << s[0] << s[0] << endl;
        return;
    }
    int ptr = 0;
    while (ptr < n - 1 && s[ptr + 1] <= s[ptr])
        ptr++;
    s = s.substr(0, ptr + 1);
    cout << s;
    reverse(s.begin(), s.end());
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