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
    string str = "989";
    if (n < 4)
    {
        for (int i = 0; i < n; i++)
        {
            cout << str[i];
        }
 
        cout << endl;
        return;
    }
    else
    {
        int k = 0;
        for (int i = 4; i <= n; i++)
        {
            str += char(k + 48);
            k++;
            if (k == 10)
                k = 0;
        }
    }
    cout << str << endl;
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