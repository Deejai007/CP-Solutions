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
 rd(n);
 int a[n],b[n],mxa=100000,mxb=0;
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
  mxa=min(a[i],mxa);
 }
 for(int i=0;i<n;i++)
 {
  cin>>b[i];
  mxb=max(b[i],mxb);
 }
  sort(a,a+n);
  sort(b,b+n);
  int cr=0;
  for(int i=0;i<n;i++)
  {
   if(a[i]!=b[i])
   {
    cr=1;
   }
   
   
  }
  if(cr==0)
  {
   cout<<"YES"<<endl;
   return;
  }
 
  
  for(int i=0;i<n;i++)
  {
   if(!(a[i]<=b[i]&&(b[i]-a[i]<=1)))
   {
    cout<<"NO"<<endl;
    return;
   }
   
  }
  
 
cout<<"YES"<<endl;
 
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