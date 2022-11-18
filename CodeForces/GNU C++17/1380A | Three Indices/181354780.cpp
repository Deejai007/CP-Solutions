/*~CF~10/10/22:*/
#include <bits/stdc++.h>
#define ll long long
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
const ll MOD = 1e9 + 7;
void solve()
{
    rd(n);
    int a[n], x = -1, y = -1, z = -1;
    int ct = 0;
 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i - 1] < a[i])
        {
            if (a[i] > a[i + 1])
            {
                x = i;
                y = i + 1;
                z = i + 2;
                break;
            }
        }
    }
    if ((x != y && y != z) && (x != -1))
    {
        cout << "YES" << endl;
        cout << x << " " << y << " " << z << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
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