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
    vector<int> a(n);
    int cntodd = 0;
    for (int j = 0; j < n; ++j)
    {
        cin >> a[j];
        cntodd += a[j] % 2;
    }
    if (cntodd < k || cntodd % 2 != k % 2)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for (int j = 0; j < n; ++j)
    {
        if (k == 1)
            break;
        if (a[j] % 2 == 1)
        {
            cout << j + 1 << " ";
            --k;
        }
    }
    cout << n << endl;
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