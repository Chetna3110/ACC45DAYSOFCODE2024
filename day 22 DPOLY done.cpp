#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	  int n,temp;
	  cin >> n;
	  
	  int arr[n];
	  for(int i=0;i<n;i++)
	  {
	    cin >> arr[i];
	    
	    if(arr[i]!=0) temp = i;
	  }
	 cout << temp << endl; 
	}
	return 0;
}