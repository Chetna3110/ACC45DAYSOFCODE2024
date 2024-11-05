#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,s;
	    cin>>a>>b;
	    s=21-(a+b);
	    if(s<=10)
	    {
	        cout<<s<<endl;
	    }
	    else
	    {
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}