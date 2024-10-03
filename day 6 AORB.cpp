#include <iostream>
using namespace std;

int main() {
	int t,a,b,x,y;
	cin >>t;
	while(t--)
	{
	    cin >>a>>b;
	    x=(500-a*2)+(1000-(a+b)*4);
	    y=(1000-b*4)+(500-(a+b)*2);
	    
	    if(x>=y)
	    {
	        cout <<x<<endl;
	    }
	    
	    else
	    {
	         cout <<y<<endl;
	    }
	}
	return 0;
}