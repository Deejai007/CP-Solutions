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
 int l;
 cin>>l;
 string s;
 cin>>s;
 map<string,int>m;
 int mx=0;
 string tmp="";
 for(int i=1;i<l;i++)
 {
   string str = s.substr(i-1, 2);
 
  m[str]++;
  mx=max(m[str],mx);
  {
   if(mx==m[str])
   {
    tmp=str;
   }
  }
 }
 cout<<tmp<<endl;
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