#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int q;
	cin>>q;
	while(q--)
	{
	    float p1,p2,s1,s2;
	    cin>>p1>>p2>>s1>>s2;
	    float t1=p1/s1;
	    float t2=p2/s2;
	    if(t1>t2)
	    {
	        cout<<"Chefina"<<endl;
	    }
	    else if(t1<t2)
	    {
	        cout<<"Chef"<<endl;
	    }
	    else cout<<"Both"<<endl;
	}
	return 0;
}
