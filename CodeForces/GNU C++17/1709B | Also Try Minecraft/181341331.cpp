/*~CF~10/10/22:*/
#include <bits/stdc++.h>
#define ll long long
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
const ll MOD = 1e9 + 7;
 
void solve()
{
    read(n, m);
    ll a[n];
    ll dif[n];
    ll dif2[n];
    dif[0] = 0;
    dif2[n - 1] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
 
        if (a[i] < a[i - 1])
            dif[i] = dif[i - 1] + a[i] - a[i - 1];
        else
            dif[i] = dif[i - 1];
 
        // cout << i << " " << dif[i] << " ";
    }
    for (int i = n - 2; i >= 0; i--)
    {
 
        if (a[i] < a[i + 1])
            dif2[i] = dif2[i + 1] + a[i] - a[i + 1];
        else
            dif2[i] = dif2[i + 1];
 
        // cout << i << " " << dif[i] << " ";
    }
 
    for (int i = 0; i < m; i++)
    {
        ll sm = 0;
        read(x, y);
        if (x <= y)
        {
            sm = dif[y - 1] - dif[x - 1];
        }
        else
        {
            sm = dif2[y - 1] - dif2[x - 1];
        }
        cout << abs(sm) << endl;
    }
}
 
int main()
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