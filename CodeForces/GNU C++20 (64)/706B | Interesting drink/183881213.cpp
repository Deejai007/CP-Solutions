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
 
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int rw;
        cin >> rw;
        v.push_back(rw);
    }
 
    sort(all(v));
    rd(q);
    while (q--)
    {
        rd(p);
        if (p >= v[n - 1])
        {
            cout << n << endl;
            continue;
        }
        if (p < v[0])
        {
            cout << 0 << endl;
            continue;
        }
        int lo = 0;
        int hi = n - 1;
        int mid;
        int ans = 0;
        while (hi >= lo)
        {
            int mid = (hi + lo) / 2;
            if (v[mid] > p)
            {
                hi = mid - 1;
            }
            else if (v[mid] <= p)
            {
                lo = mid + 1;
            }
        }
        cout << hi + 1 << endl;
    }
}
 
signed main()
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