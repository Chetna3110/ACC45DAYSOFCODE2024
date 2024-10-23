#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,h,c;
	cin>>t;
	while(t--)
	{
	    cin>>h>>x>>y;
	    int a= h-y;
	    if(a!=0)
	    {
	        int b=a/x;
	        if(a%x!=0)
	        c=b+2;
	        else
	        c=b+1;
	    }
	    else
	    c=1;
	    
	    
	    cout<<c<<endl;
	    
	}
	return 0;
}