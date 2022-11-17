/*~CF~10/10/22:*/
#include <bits/stdc++.h>
#define ll long long
// #define endl "\n"
#define rd(x) \
    int x;    \
    cin >> x
#define read(x, y) \
    int x, y;      \
    cin >> x >> y
#define all(x) (x).begin(), (x).end()
#define get(a, n)               \
    int n;                      \
    cin >> n;                   \
    int a[n];                   \
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
    int x5 = n / 5;
    int x7 = n / 7;
    for (int i = 0; i <= x5; i++)
    {
        for (int j = 0; j <= x7; j++)
        {
            int x3 = n - (i * 5 + j * 7);
            if (x3 % 3 == 0)
            {
                cout << (x3 / 3) << " " << i << " " << j << endl;
                return;
            }
        }
    }
 
    cout << "-1" << endl;
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