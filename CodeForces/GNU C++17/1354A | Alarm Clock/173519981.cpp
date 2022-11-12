#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
    long long a,b,c,d,ns,t,ls,tt,ko;
    cin>>a>>b>>c>>d;
    if(b>=a)
    {
        cout<<b<<endl;
        continue;
    }
    if(c<=d)
    {
        cout<<"-1"<<endl;
        continue;
    }
    
    ns=b;
    ls=a-b;
   
 
    ko=ls%(c-d);
    if(ko==0)
    {
        t=ls/(c-d);
    }
    else t=(ls+c-d)/(c-d);
 
   
 
    tt=t*c+b;
cout<<tt<<endl;
 
    }
    return 0;
}