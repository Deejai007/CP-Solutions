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
 
bool poss(int a[], int n, int val)
{
 
 val = val * 2;
 int req = 1;
 int pv = 0;
 for (int i = 0; i < n; i++)
 {
  if (a[i] - a[pv] > val)
  {
   req++;
   pv = i;
  }
 }
 if (req <= 3)
  return true;
 else
  return false;
}
 
void solve()
{
 
 int n;
 cin >> n;
 int ans = 0;
 int a[n];
 for (int i = 0; i < n; i++)
 {
  cin >> a[i];
 }
 sort(a, a + n);
 int lb = 0, ub = a[n - 1];
 while (lb <= ub)
 {
  int mid = lb + (ub - lb) / 2;
  if (poss(a, n, mid))
  {
   ans = mid;
   ub = mid - 1;
  }
  else
  {
   lb = mid + 1;
  }
 }
 cout << ans << '\n';
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