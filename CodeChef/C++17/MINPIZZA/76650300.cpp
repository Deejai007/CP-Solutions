#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int q;
	cin>>q;
	while(q--)
	{
	    int a,b;
	    cin>>a>>b;
	    b=b*a;
	    if(b%4==0)
	    {
	        cout<<(b/4)<<endl;
	    }
	    else cout<<((b/4)+1)<<endl;
	}
	return 0;
}
