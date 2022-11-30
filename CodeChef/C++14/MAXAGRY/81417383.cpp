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
    read(n, k);

    if (k >= (n / 2))
    {
        cout << ((n * (n - 1)) / 2) << endl;
        return;
    }
    // int s1 = (n * (n + 1)) / 2 - ((n - k) * (n + 1 - k)) / 2;
    // int s2 = (n * (k - 1)) - (k * (k - 1));
    // int s3 = ((k - 1) * k) / 2;

    // cout << (s1 + s2 + s3) << endl;
    int sm = (n * (n - 1)) / 2;
    int x = n - 2 * k;
    sm -= (x * (x - 1)) / 2;
    cout << sm << endl;
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
