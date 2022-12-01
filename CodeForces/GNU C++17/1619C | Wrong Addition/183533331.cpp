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
string removeLeadingZeros(string num)
{
    // traverse the entire string
    for (int i = 0; i < num.length(); i++)
    {
 
        // check for the first non-zero character
        if (num[i] != '0')
        {
            // return the remaining string
            string res = num.substr(i);
            return res;
        }
    }
 
    // If the entire string is traversed
    // that means it didn't have a single
    // non-zero character, hence return "0"
    return "0";
}
 
void solve()
{
    string a, s;
    cin >> a >> s;
    int l1 = a.length();
    reverse(all(a));
    int l2 = s.length();
    string b = "";
    int k = 0;
    int i = 0;
    for (i = l2 - 1; i >= 0; i--)
    {
        if (k < l1)
        {
 
            if (a[k] > s[i])
            {
                int num = ((s[i - 1] - '0') * 10) + (s[i] - '0');
                int num2 = a[k] - '0';
                int dif = num - num2;
                if (dif > 9 || dif < 0)
                {
                    cout << -1 << endl;
                    return;
                }
                // cout << dif << "g" << endl;
                char ch = '0' + dif;
                b = b + ch;
                i--;
                k++;
            }
            else
            {
                int num = (s[i] - '0');
                int num2 = a[k] - '0';
                int dif = num - num2;
                // cout << dif << "n" << endl;
                char ch = '0' + dif;
                b = b + ch;
                k++;
            }
        }
        else
        {
 
            b += s[i];
        }
        // i--;
    }
 
    reverse(all(b));
    string kk = removeLeadingZeros(b);
    if (k == l1 && i == -1)
        cout << kk << endl;
    else
        cout << -1 << endl;
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