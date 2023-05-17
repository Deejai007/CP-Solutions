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
    read(n, k);
    if (n & 1)
    {
        int a = n / 2;
        int b = n / 2 + 1;
        cout << a << " " << a << " " << 1 << endl;
    }
    else
    {
        int a = n / 2;
        if (a & 1)
        {
            int a1 = n - 2;
            int a2 = a1 / 2;
            cout << 2 << " " << a2 << " " << a2 << endl;
        }
        else
            cout << n / 2 << " " << n / 4 << " " << n / 4 << endl;
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