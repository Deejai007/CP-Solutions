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
    int l, r, x;
    cin >> l >> r >> x;
    int a, b;
    read(l1, l2);
    a = max(l1, l2);
    b = min(l1, l2);
    int s1 = abs(a - l);
    int s2 = abs(b - l);
    int s3 = abs(a - r);
    int s4 = abs(b - r);
    if (a == b)
    {
        cout << "0" << endl;
    }
    else if (abs(a - b) >= x)
    {
        cout << "1" << endl;
    }
    else if ((s1 < x && s3 < x) || (s2 < x && s4 < x))
 
    {
        cout << "-1" << endl;
    }
 
    else
    {
 
        if (s1 < x)
        {
            if (s4 >= x)
            {
                cout << "2" << endl;
            }
            else
                cout << "3" << endl;
        }
        else if (s3 < x)
        {
            if (s2 >= x)
            {
                cout << "2" << endl;
            }
            else
                cout << "3" << endl;
        }
        else
            cout << "2" << endl;
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