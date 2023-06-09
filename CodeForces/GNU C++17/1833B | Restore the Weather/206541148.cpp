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
    int n, k;
    cin >> n >> k;
    int a[n];
    int b[n];
    int c[n];
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back({a[i], i});
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
 
    sort(b, b + n);
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        c[v[i].second] = b[i];
    }
 
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << " ";
    }
 
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i].second << " ";
    // }
    cout << endl;
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