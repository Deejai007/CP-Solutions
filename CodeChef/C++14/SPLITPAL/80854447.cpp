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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mov = 0;
    int x = 0;
    int y = n - 1;
    int t1 = a[x];
    int t2 = a[y];
    while (x < y)
    {
        if (t1 > t2)
        {
            t1 = t1 - t2;
            --y;
            mov++;
            t2 = a[y];
        }
        else if (t1 < t2)
        {
            t2 = t2 - t1;
            ++x;
            mov++;
            t1 = a[x];
        }
        else
        {
            ++x;
            --y;

            t1 = a[x];
            t2 = a[y];
        }
    }
    cout << mov << endl;
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