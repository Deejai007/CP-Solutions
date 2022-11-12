#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int q;
	cin>>q;
	while(q--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int ct=0;
	   
	   for(int i=0;i<n;i++)
	   {
	       if(s.at(i)=='1')
	       {
	           ct++;
	       }
	       else {
	           break;
	       }
	   }
	   cout<<ct<<endl;
	}
	return 0;
}
