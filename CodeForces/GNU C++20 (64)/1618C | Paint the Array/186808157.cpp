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
    rd(n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int gcd1 = 0;
    for (int i = 0; i < n; i += 2)
    {
        gcd1 = __gcd(a[i], gcd1);
    }
 
    int gcd2 = 0;
    for (int i = 1; i < n; i += 2)
    {
        gcd2 = __gcd(a[i], gcd2);
    }
    // cout<<gcd1<<gcd2;
    // if(gcd1==1&&gcd2==1)
    // {
    //  cout<<0<<endl;
    //  return;
    // }
    int chk1 = false;
    int chk2 = false;
    for (int i = 1; i < n; i += 2)
    {
        if (a[i] % gcd1 == 0)
        {
            chk1 = true;
        }
    }
    for (int i = 0; i < n; i += 2)
    {
        if (a[i] % gcd2 == 0)
        {
            chk2 = true;
        }
    }
    if (chk1 == false && gcd1 > 1)
    {
        cout << gcd1 << endl;
        return;
    }
    if (chk2 == false && gcd2 > 1)
    {
        cout << gcd2 << endl;
        return;
    }
    cout << 0 << endl;
 
    // if (chk1 == chk2)
    // {
    //     cout << "0" << endl;
    // }
    // else
    //     cout << max(gcd1, gcd2) << endl;
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