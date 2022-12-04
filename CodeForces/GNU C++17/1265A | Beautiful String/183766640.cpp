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
    for (int i = 0; i < (n - 1); i++)
    {
        if (s[i] == s[i + 1] && s[i] != '?')
        {
            cout << -1 << endl;
            return;
        }
    }
 
    for (int i = 0; i < n; i++)
    {
        // char ch = 'c';
        // char ch[3]={1,1,1};
        map<char, int> m;
        if (s[i] == '?')
        {
            m[s[i - 1]] = 1;
            m[s[i + 1]] = 1;
            if (m['a'] == 0)
            {
                s[i] = 'a';
            }
            else if (m['b'] == 0)
            {
                s[i] = 'b';
            }
            else
                s[i] = 'c';
        }
    }
 
    cout << s << endl;
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