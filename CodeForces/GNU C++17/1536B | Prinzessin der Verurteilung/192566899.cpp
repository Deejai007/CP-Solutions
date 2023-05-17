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
    int a[n];                   \
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
    rd(n);
    string s;
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        string str;
        str += ch;
        mp[str] = 1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        mp[s.substr(i, 2)] = 1;
    }
    for (int i = 0; i < n - 2; i++)
    {
        mp[s.substr(i, 3)] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        char ch = 'a' + i;
        string str;
        str += ch;
        if (mp[str] == 0)
        {
            cout << (str) << endl;
            return;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
 
            char ch = 'a' + i;
            char ch2 = 'a' + j;
            string str;
            str += ch;
            str += ch2;
            if (mp[str] == 0)
            {
                cout << (str) << endl;
                return;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            for (int k = 0; k < 26; k++)
            {
 
                char ch = 'a' + i;
                char ch2 = 'a' + j;
                char ch3 = 'a' + k;
                string str;
                str += ch;
                str += ch2;
                str += ch3;
                if (mp[str] == 0)
                {
                    cout << (str) << endl;
                    return;
                }
            }
        }
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