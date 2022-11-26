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
    int n;
    cin >> n;
    int a[n];
    cin >> a[0];
    int pp = a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
 
        pp = __gcd(pp, a[i]);
    }
    // cout << pp << endl;
    cout << (a[n - 1] / pp) << endl;
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