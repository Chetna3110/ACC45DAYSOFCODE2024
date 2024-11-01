#include <iostream>
using namespace std;



void chh()
{
    
	    int a,b,c,d;
	    cin>>a>>b;
	    cin>>c>>d;
	    
	    if(c < a || d < b) cout<<"IMPOSSIBLE"<<endl;
	    else cout<<"POSSIBLE"<<endl;
    
	    
}
int main() {
	int t; 
	cin>>t;
    while(t--)
    {
        chh();
    }
	    

	return 0;
	}