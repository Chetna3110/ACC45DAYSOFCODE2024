#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int count=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    if(n%2!=0){
	        cout<<"-1"<<endl;
	    }
	    else{
	        for(int i=0;i<n;i++){
	        if(a[i]==1){
	            count++;
	        }
	    }
	    cout<<abs((n/2)-count)<<endl;
	    }
	}
	return 0;
}