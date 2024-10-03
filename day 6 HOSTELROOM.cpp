#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n,x,sum,maxi; cin>>n>>x;
	    sum=x; maxi=x;
	    int a[n];
	    for(int i=0;i<n;i++)
	    { 
	        cin>>a[i];
	        sum+=a[i];
	        maxi=max(sum,maxi);
	    }
	    cout<<maxi<<endl;
	    
	}
	return 0;
}