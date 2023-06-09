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
 int n;
 cin >> n;
 int a[n];
 for (int i = 0; i < n; i++)
 {
  cin >> a[i];
 }
 sort(a, a + n);
 int ans1 = a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5];
 int ans2 = a[n - 1] * a[n - 2] * a[n - 3] * a[1] * a[0];
 int ans3 = a[n - 1] * a[3] * a[2] * a[1] * a[0];
 cout << max(max(ans1, ans2), ans3) << endl;
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