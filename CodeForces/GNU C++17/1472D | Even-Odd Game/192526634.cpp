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
    rd(n);
    get(a, n);
    int aa = 0, b = 0;
    int od = 0, ev = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] & 1)
            od++;
    }
    ev = n - od;
    sort(a, a + n);
    int c = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] % 2 != 0 && c == 1)
        {
            b += a[i];
        }
        if (c == 0 && a[i] % 2 == 0)
        {
            aa += a[i];
        }
        c = c == 0 ? 1 : 0;
    }
    if (aa > b)
    {
        cout << "Alice" << endl;
    }
    else if (aa == b)
    {
        cout << "Tie" << endl;
    }
    else
        cout << "Bob" << endl;
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