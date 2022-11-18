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
    string s;
    cin >> s;
 
    int n00 = 0, n11 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            n11++;
        else
            n00++;
    }
    int ans = n00 * n11;
 
    int ans1 = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cnt++;
            ans1 = max(ans1, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    cnt = 0;
    int ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            cnt++;
            ans2 = max(ans2, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    ans1 = ans1 * ans1;
    ans2 = ans2 * ans2;
 
    int rr = max(ans, max(ans1, ans2));
 
    cout << rr << endl;
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