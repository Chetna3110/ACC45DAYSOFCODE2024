#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n,x,p;
	    cin>>n>>x>>p;
	    int temp=n-x;
	    
	    if(x*3-temp>=p){
	        cout<<"PASS"<<endl;
	    } else{
	        cout<<"FAIL"<<endl;
	    }
	}
	return 0;
}