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
#define fr(i, n) for (int i = 0; i < n; i++)
 
using namespace std;
 
#define PI 3.1415926535897932384626433832795l
const int MOD = 1e9 + 7;
int i = 0;
void solve()
{
    read(n, k);
    int a[k];
    fr(i, k)
    {
        a[i] = 2;
    }
    a[k - 1] = n - (k - 1) * 2;
    if (a[k - 1] % 2 == 0 && a[k - 1] > 0)
    {
        cout << "YES" << endl;
        fr(i, k)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    int b[k];
    fr(i, k)
    {
        b[i] = 1;
    }
    b[k - 1] = n - (k - 1);
    if ((b[k - 1] % 2 != 0) && b[k - 1] > 0)
    {
        cout << "YES" << endl;
        fr(i, k)
        {
            cout << b[i] << " ";
        }
        cout << endl;
        return;
    }
    cout << "NO" << endl;
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