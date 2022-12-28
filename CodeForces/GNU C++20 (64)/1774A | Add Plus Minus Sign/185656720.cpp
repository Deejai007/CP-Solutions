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
    char c[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        c[i] = '+';
    }
 
    int sm[n];
    if (s[0] == '1')
        sm[0] = 1;
    else
        sm[0] = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '1')
        {
            sm[i] = sm[i - 1] + 1;
        }
        else
            sm[i] = sm[i - 1];
    }
    int kk = 2;
    for (int i = 1; i < n; i++)
    {
        if (sm[i] == kk)
        {
            c[i - 1] = '-';
            kk += 2;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        cout << c[i];
    }
    cout << endl;
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