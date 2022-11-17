/*~CF~10/10/22:*/
#include <bits/stdc++.h>
#define ll long long
#define rd(x) int x; cin >> x
#define read(x,y) long long  x,y; cin >> x >> y
#define all(x) (x).begin(), (x).end()
#define get(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define fr(a,b) for(int i = a; i < b; i++)
 
using namespace std;
 
#define PI 3.1415926535897932384626433832795l 
const ll MOD = 1e9 + 7;
 
void solve() {
 read(n,k);
 ll rr=n*k;
 ll a[rr];
 for(ll i=0;i<rr;i++)
 {
  cin>>a[i];
 }
 ll med;
 
 if(n&1)
 {
  med=n/2;
 }
 else med=(n+1)/2;
 ll sm=0;
 int tmp=k;
 for(int i=rr-med-1;tmp--;i-=(med+1))
 {
  sm+=a[i];
 }
 cout<<sm<<endl;
 
 
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
     cin >> tc;
    for (int t = 1; t <= tc; t++) {
        
        solve();
    }
}