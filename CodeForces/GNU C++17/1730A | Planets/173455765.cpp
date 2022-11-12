#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
 
#define f(i, s, e) for (long long int i = s; i < e; i++)
#define cf(i, s, e) for (long long int i = s; i <= e; i++)
#define rf(i, e, s) for (long long int i = e - 1; i >= s; i--)
#define pb push_back
#define eb emplace_back
 
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
 
int main()
{
 
    int q;
    cin >> q;
    while (q--)
    {
        ll n, c;
        cin >> n >> c;
        int a;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            m[a]++;
        }
        int cst = 0;
        for (auto x : m)
        {
            int y = x.second;
            if (y == 1)
            {
                cst++;
                continue;
            }
            if (c <= y)
            {
                cst += c;
            }
            else
            {
                cst += y;
            }
        }
        cout << cst << endl;
    }
    return 0;
}