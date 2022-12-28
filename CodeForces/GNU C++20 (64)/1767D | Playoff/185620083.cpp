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
    string s;
    cin >> s;
    int len = pow(2, n);
 
    int c0 = 0, c1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            c1++;
        else
            c0++;
    }
    // cout << c0 << c1 << endl;
 
    int a1 = 0;
    while (c1)
    {
        a1 += pow(2, --c1);
    }
    // cout << a1 << endl;
    int a2 = 0;
    while (c0)
    {
        a2 += pow(2, --c0);
    }
    a2 = len - a2;
    // cout << a2 << endl;
    for (int i = a1 + 1; i <= a2; i++)
    {
        cout << i << " ";
    }
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