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
    ll n;
    cin >> n;
    ll a[n];
    ll smin = INT_MAX;
    ll smax = INT_MIN;
    ll sm = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sm += a[i];
        if (a[i] < smin)
        {
            smin = a[i];
        }
        if (a[i] > smax)
        {
            smax = a[i];
        }
    }
    if (smin >= 0)
    {
        cout << abs(sm) << endl;
    }
    else if (smax <= 0)
    {
        cout << abs(sm) << endl;
    }
    else
    {
 
        ll a1 = abs(abs(sm - smin) - abs(smin));
        ll a2 = abs(abs(sm - smax) - abs(smax));
        cout << (max(a1, a2)) << endl;
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