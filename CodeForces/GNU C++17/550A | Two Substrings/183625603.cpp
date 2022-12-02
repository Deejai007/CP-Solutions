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
    bool fd1 = false;
    bool fd2 = false;
 
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n - 1; i++)
    {
        string r;
        r += s[i];
        r += s[i + 1];
        if (r == "AB")
        {
            i += 2;
            while (i < n - 1)
            {
                string p;
                p += s[i];
                p += s[i + 1];
                if (p == "BA")
                {
                    fd1 = true;
                    break;
                }
                i++;
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        string r;
        r += s[i];
        r += s[i + 1];
        if (r == "BA")
        {
            i += 2;
            while (i < n - 1)
            {
                string p;
                p += s[i];
                p += s[i + 1];
                if (p == "AB")
                {
                    fd2 = true;
                    break;
                }
                i++;
            }
        }
    }
    reverse(all(s));
    for (int i = 0; i < n - 1; i++)
    {
        string r;
        r += s[i];
        r += s[i + 1];
        if (r == "BA")
        {
            i += 2;
            while (i < n - 1)
            {
                string p;
                p += s[i];
                p += s[i + 1];
                if (p == "AB")
                {
                    fd1 = true;
                    break;
                }
                i++;
            }
        }
    }
 
    for (int i = 0; i < n - 1; i++)
    {
        string r;
        r += s[i];
        r += s[i + 1];
        if (r == "AB")
        {
            i += 2;
            while (i < n - 1)
            {
                string p;
                p += s[i];
                p += s[i + 1];
                if (p == "BA")
                {
                    fd2 = true;
                    break;
                }
                i++;
            }
        }
    }
 
    if (fd1 || fd2)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
 
        solve();
    }
}