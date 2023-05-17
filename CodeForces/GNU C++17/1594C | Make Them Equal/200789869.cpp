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
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == c)
        {
            k++;
        }
    }
    if (k == n)
    {
        cout << 0 << endl;
        return;
    }
    for (int i = n; i >= n / 2; i--)
    {
        if (s[i] == c)
        {
            cout << 1 << endl;
            cout << i + 1 << endl;
            return;
        }
    }
    cout << 2 << endl;
    cout << n << " " << n - 1 << endl;
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