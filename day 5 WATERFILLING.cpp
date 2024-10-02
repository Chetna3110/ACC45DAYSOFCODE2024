#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int b[3],T=0;
	    for(int i=0;i<3;i++){
	        cin>>b[i];
	        if(b[i]==0){
	            T++;
	        }
	    }
	    if(T>=2){
	        cout<<"Water filling time"<<endl;
	    }
	    else if(T<2){
	        cout<<"Not now"<<endl;
	    }
	}
	return 0;
}