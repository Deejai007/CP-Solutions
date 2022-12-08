/*~CF~10/10/22:*/
#include <bits/stdc++.h>
#define int long long
#define rd(x) \
    int x;    \
    cin >> x
#define rds(x) \
    string x;  \
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
#define pb push_back
 
using namespace std;
 
#define PI 3.1415926535897932384626433832795l
const int MOD = 1e9 + 7;
 
void solve()
{
    int n;
    cin >> n;
    int x[n], y[n], z[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
        // if (y[i] < x[i])
        // {
        //     cout << "NO" << endl;
        //     return;
        // }
        z[i] = y[i] - x[i];
    }
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (z[i] == 0)
        {
            i++;
        }
        else if (z[j] == 0)
        {
            j--;
        }
        else
            break;
    }
    // for (int k = i; k <= j; k++)
    // {
    //     cout << z[k] << " ";
    // }
    // cout << endl;
 
    // cout << i << j << endl;
    bool flag = 1;
 
    for (int k = i; k < j; k++)
    {
        // cout << "Q";
        if (z[i] < 0)
        {
            flag = 0;
            break;
        }
        if (z[k] != z[k + 1])
            flag = 0;
    }
    if (flag && z[i] >= 0)
        cout << "YES" << endl;
    else
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