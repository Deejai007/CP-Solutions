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
    if (n > 45)
    {
        cout << "-1" << endl;
    }
    else if (n <= 9)
    {
        cout << n << endl;
    }
    else
    {
        string s = "";
        int k = 9;
        while (n && k)
        {
            if (n >= k)
            {
                n -= k;
            }
            else
            {
                k = n;
                n = 0;
            }
            char ch = '0' + k;
            s = ch + s;
            --k;
        }
        cout << s << endl;
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