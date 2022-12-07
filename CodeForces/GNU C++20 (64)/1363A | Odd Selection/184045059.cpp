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
    read(n, x);
    vector<int> v;
    int oc = 0, ec = 0;
    for (int i = 0; i < n; i++)
    {
        int kk;
        cin >> kk;
        v.push_back(kk);
        if (kk & 1)
        {
            oc++;
        }
        else
            ec++;
    }
    if (oc == 0)
    {
        cout << "no" << endl;
    }
    else if (oc == n)
    {
        if (x & 1)
        {
            cout << "yes" << endl;
        }
        else
            cout << "no" << endl;
    }
    else
    {
 
        if (n == x)
        {
            if (oc & 1)
            {
                cout << "yes" << endl;
            }
            else
                cout << "no" << endl;
        }
        else
            cout << "yes" << endl;
    }
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