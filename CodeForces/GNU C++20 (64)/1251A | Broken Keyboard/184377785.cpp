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
    string s;
    cin >> s;
    int n = s.length();
    //  int ct=0;
    // string st = "";
    map<char, int> mp;
    if (n == 1)
    {
        cout << s << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        int st = i;
        if (s[i] == s[i + 1])
        {
            i++;
            while (s[i] == s[i + 1])
            {
                i++;
            }
        }
        // cout << s[i] << (i + 1 - st) << endl;
        if ((i + 1 - st) & 1)
        {
            mp[s[i]] = 1;
        }
    }
 
    for (auto i : mp)
    {
        if (i.second == 1)
        {
            cout << i.first;
        }
    }
    cout << endl;
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