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
    string str = "";
    if (n % 2 == 0)
    {
        int k = n / 2;
        for (int i = 0; i < k; i++)
        {
            str += '1';
        }
    }
    else
    {
        int l = (n - 3) / 2;
        str += '7';
        for (int i = 0; i < l; i++)
        {
            str += '1';
        }
    }
    cout << str << endl;
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