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
#define get(a, n)                  \
    int a[n];                      \
    for (int gg = 0; gg < n; gg++) \
    {                              \
        cin >> a[i];               \
    }
#define fr(a, b) for (int i = 0; i < n; i++)
 
using namespace std;
 
#define PI 3.1415926535897932384626433832795l
const int MOD = 1e9 + 7;
 
void solve()
{
    int n, i;
    cin >> n;
    string s;
    cin >> s;
    int f = 1, z = 0;
    fr(i, n)
    {
        if (s[i] == '0')
            z++;
    }
    int x = 0;
    fr(i, n / 2)
    {
        if (s[i] != s[n - 1 - i])
        {
            f = 0;
            x++;
        }
    }
    if (f)
    {
        if (z == 1 || z % 2 == 0)
            cout << "BOB" << endl;
        else
            cout << "ALICE" << endl;
    }
    else
    {
        if (x == 1 && z == 2)
            cout << "DRAW" << endl;
        else
            cout << "ALICE" << endl;
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