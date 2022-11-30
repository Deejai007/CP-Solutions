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
 
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = INT_MAX;
    int ctr = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            ctr++;
        }
        else
        {
            ctr--;
        }
        x = min(x, ctr);
    }
 
    cout << -x << endl;
    // int p = 1;
    // int l = 0;
    // while (p)
    // {
    //     if (s[l])
    // }
 
    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] == '(')
    //     {
    //         break;
    //     }
    //     else
    //         x++;
    // }
    // int y = 0;
    // for (int i = n - 1; i >= 0; i++)
    // {
    //     if (s[i] == ')')
    //     {
    //         break;
    //     }
    //     else
    //         y++;
    // }
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