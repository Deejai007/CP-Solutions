#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int q,s1,s2,s3,s4;
    cin>>q;
        while(q--)
        {
          cin>>s1>>s2>>s3>>s4;
            if(max(s1,s2)<min(s3,s4)||min(s1,s2)>max(s3,s4))
            cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
            
        }
}