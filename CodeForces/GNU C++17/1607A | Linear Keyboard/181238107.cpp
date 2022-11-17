/*~CF~10/10/22:*/
#include <bits/stdc++.h>
#define ll long long
#define rd(x) int x; cin >> x
#define read(x,y) int x,y; cin >> x >> y
#define all(x) (x).begin(), (x).end()
#define get(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define fr(a,b) for(int i = a; i < b; i++)
 
using namespace std;
 
#define PI 3.1415926535897932384626433832795l 
const ll MOD = 1e9 + 7;
 
void solve() {
    
 string s;
    cin >> s;
    int ans = 0;
    int pos[26];
    for (int i = 0; i < 26; i++)
    {
        pos[s[i] - 96] = i;
    }
    string k;
    cin >> k;
    for (int j = 1; j < k.length(); j++)
    {
        ans += abs(pos[k[j] - 96] - pos[k[j - 1] - 96]);
    }
    cout << ans << endl;
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