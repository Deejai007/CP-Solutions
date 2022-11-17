/*~CF~10/10/22:*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main() {
    
    int tc = 1;
     //cin >> tc;
    for (int t = 1; t <= tc; t++) 
    {
    
 
  ll n;
  cin>>n;
  ll x[n];
  for(int i=0;i<n;i++)
  {
   cin>>x[i];
  }
  ll a[n];
  ll mx[n];
  a[0]=x[0];
  a[1]=a[0]+x[1];
  mx[1]=max(a[0],a[1]);
  for(ll j=2;j<n;j++)
  {
 a[j]=mx[j-1]+x[j];
 mx[j]=max(mx[j-1],a[j]);
  }
  for(ll j=0;j<n;j++)
  {
 cout<<a[j]<<" ";
 
  }
  cout<<"\n";
}
        
        
    
}