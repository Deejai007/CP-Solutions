/*~CF~10/10/22:*/
#include <bits/stdc++.h>
#define ll long long
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
const ll MOD = 1e9 + 7;

void solve()
{
    ll n,x;
    cin >> n>>x;
   
    ll a[n];
    ll ctr=0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];

        
    }
    if(n==1)
    {
        if(a[0]==x)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        return;
    }
    
     for (ll i = 0; i < n; i++)
    {
        if(a[i]==x&&i!=(n-1))
        {
            ctr=1;
        }
        
    }
    if(ctr==1)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"No"<<endl;

}

int main()
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