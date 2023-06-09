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
    read(n,m);
    
    int a1=0;
    for (int i = 1; i <= 10; i++) {
     a1+=   (m*i)%10;
    }
    // cout<<a1<<"W"<<endl;
    int ans1=n/(m*10);
    ans1*=a1;
    int lft=n%(m*10);
    int ans2=0;
    for(int i=m;i<=lft;i+=m)
    {
     ans2+=(i%10);   
    }
    // cout<<ans2<<"E"<<endl;
    cout<<ans1+ans2<<endl;
    
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