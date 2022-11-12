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
    vector<pair<ll, ll>> dimensions;
    for (int i = 0; i < n; i++)
    {
        ll l, b;
        cin >> l >> b;
        if (l > b)
            dimensions.push_back({l, b});
        else
            dimensions.push_back({b, l});
    }
    ll total_perimeter = 0;
    sort(dimensions.begin(), dimensions.end());
    for (int i = 0; i < n; i++)
    {
        ll length = dimensions[i].first;
        ll width = dimensions[i].second;
 
        total_perimeter = total_perimeter + 2 * (length + width);
 
        if (i > 0)
        {
            ll left_length = dimensions[i - 1].first;
            total_perimeter = total_perimeter - min(length, left_length);
        }
        if (i < n - 1)
        {
            ll right_length = dimensions[i + 1].first;
            total_perimeter = total_perimeter - min(length, right_length);
        }
    }
 
    cout << total_perimeter << endl;
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