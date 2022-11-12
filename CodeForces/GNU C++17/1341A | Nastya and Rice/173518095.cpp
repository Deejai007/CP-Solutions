#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
       int s1=(a-b)*n;
       int e1=(a+b)*n;
       int s2=c-d;
       int e2=c+d;
       int totalRange =max(e1, e2) -min(s1, s2);
int sumOfRanges = (e1 - s1) + (e2 - s2);
 
if (sumOfRanges >= totalRange) 
{
    cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    }
    return 0;
}