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
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
 
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n < 4)
        {
            cout << "NO" << endl;
            continue;
        }
        string s1;
        unordered_map<string, int> mp;
        string ans = "NO";
        for (int i = 0; i < n - 1; i++)
        {
            s1 = s[i];
            s1 += s[i + 1];
 
            if (mp.find(s1) == mp.end())
            {
                mp[s1] = i;
            }
            else
            {
                if (mp[s1] != i - 1)
                {
                    ans = "YES";
                    break;
                }
            }
        }
        cout << ans << endl;
    }
}