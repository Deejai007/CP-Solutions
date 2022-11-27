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
int powd(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    for (int i = 1; i < b; i++)
    {
        a = a * 2;
    }
    return a;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cer = 0, ceb = 0, cor = 0, cob = 0;
    for (int i = 0; i < n; i++)
    {
        int dig = s[i] - '0';
        if ((i + 1) & 1)
        {
            if (dig & 1)
                cor++;
            else
                cer++;
        }
        else
        {
            if (dig & 1)
                cob++;
            else
                ceb++;
        }
    }
    // cout << cor << endl;
    // cout << cer << endl;
    // cout << cob << endl;
    // cout << ceb << endl;
    if (n & 1)
    {
        if (cor > 0)
        {
            cout << "1" << endl;
        }
        else
            cout << "2" << endl;
    }
    else
    {
        if (ceb > 0)
        {
            cout << "2" << endl;
        }
        else
            cout << "1" << endl;
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