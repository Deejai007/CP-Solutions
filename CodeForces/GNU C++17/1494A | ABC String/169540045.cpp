#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define rf(i, a, b) for (ll i = a; i >= b; i--)
typedef std::vector<long long> vi;
#define F first
#define S second
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
#define PB push_back
#define MP make_pair
#define PI 3.14159265358979323846
#define all(a) a.begin(), a.end()
#define mx(a) *max_element(all(a))
#define mn(a) *min_element(all(a))
const ll INF = LLONG_MAX / 2;
const ll N = 2e5 + 1;
using namespace std;
bool isregular(string t)
{
    ll n = t.length(), co = 0;
    fr(i, 0, n)
    {
        if (t[i] == ')')
            co--;
        else
            co++;
        if (co < 0)
            return false;
    }
    if (co > 0)
        return false;
    return true;
}
int main()
{
    fast;
    ll t = 1;
    std::cin >> t;
    while (t--)
    {
        ll n, i, j = 0;
        string s;
        std::cin >> s;
        n = s.length();
        string t = s, u = s;
        fr(i, 0, n)
        {
            if (s[i] == 'A' || s[i] == 'B')
            {
                t[i] = '(';
            }
            else
                t[i] = ')';
        }
        if (isregular(t))
        {
            cout << "YES\n";
            continue;
        }
        fr(i, 0, n)
        {
            if (s[i] == 'A' || s[i] == 'C')
            {
                t[i] = '(';
            }
            else
                t[i] = ')';
        }
        if (isregular(t))
        {
            cout << "YES\n";
            continue;
        }
        fr(i, 0, n)
        {
            if (s[i] == 'C' || s[i] == 'B')
            {
                t[i] = '(';
            }
            else
                t[i] = ')';
        }
        if (isregular(t))
        {
            cout << "YES\n";
            continue;
        }
        fr(i, 0, n)
        {
            if (s[i] == 'A' || s[i] == 'B')
            {
                t[i] = ')';
            }
            else
                t[i] = '(';
        }
        if (isregular(t))
        {
            cout << "YES\n";
            continue;
        }
        fr(i, 0, n)
        {
            if (s[i] == 'A' || s[i] == 'C')
            {
                t[i] = ')';
            }
            else
                t[i] = '(';
        }
        if (isregular(t))
        {
            cout << "YES\n";
            continue;
        }
        fr(i, 0, n)
        {
            if (s[i] == 'C' || s[i] == 'B')
            {
                t[i] = ')';
            }
            else
                t[i] = '(';
        }
        if (isregular(t))
        {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
}