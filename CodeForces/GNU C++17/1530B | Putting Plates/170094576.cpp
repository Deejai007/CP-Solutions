 
#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n,m;
        cin>>n>>m;
 
        int a[n][m];
 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                a[i][j]=0;
            }
        }
 
        for (int i = 0; i < n; i+=2)
        {
            a[i][0]=1;
            a[i][m-1] = 1;
        }
 
        for (int i = 2; i <= m-3; i+=2)
        {
            a[0][i] = 1;
            a[n-1][i] = 1;
        }
 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout<<a[i][j];
            }
            cout<<"\n";
        }
 
        cout<<"\n\n";
        
        
    }
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}