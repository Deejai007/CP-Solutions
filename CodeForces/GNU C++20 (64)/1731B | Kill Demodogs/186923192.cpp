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
const int MOD = 1000000007;
 
// int m = MOD;
// int modInverse(int b, int m)
// {
//     int x, y; // used in extended GCD algorithm
//     // int g = gcdExtended(b, m, &x, &y);
 
//     // Return -1 if b and m are not co-prime
//     // if (g != 1)
//     // return -1;
 
//     // m is added to handle negative x
//     return (x % m + m) % m;
// }
 
// // Function to compute a/b under modulo m
// int modDivide(int a, int b, int m)
// {
//     a = a % m;
//     int inv = modInverse(b, m);
//     if (inv == -1)
//         // cout << "Division not defined";
//         return 1;
//     else
//         // cout << "Result of division is " << (inv * a) % m;
//         return ((inv * a) % m);
// }
void solve()
{
    int n;
    cin >> n;
    // n = n % MOD;
    // // int sm = ((n * (n + 1)) % MOD) % (((2 * n + 1) % MOD)) % MOD;
 
    // int sm = ((n * (n + 1)) / 6) % MOD;
    // sm = ((sm % MOD) * ((2 * n + 1) % MOD)) % MOD;
    // // sm /= 6;
    // sm = modDivide(sm, 6, MOD);
    // int s2 = (((n % MOD) * ((n - 1) % MOD)) / 3) % MOD;
    // s2 = (s2 % MOD * ((n + 1) % MOD)) % MOD;
    // // s2/=3;
    // s2 = modDivide(s2, 3, MOD);
    // int ss = (((sm % MOD) + (s2 % MOD)) * 2022) % MOD;
    // // ss = (ss ) % MOD;
    int k = n % MOD;
    int kk = (n + 1) % MOD;
    int kkk = (4 * n - 1) % MOD;
    int sm = (k * kk) % MOD;
    sm = (sm * kkk) % MOD;
    sm = (sm * 2022 / 6) % MOD;
    cout << sm << endl;
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