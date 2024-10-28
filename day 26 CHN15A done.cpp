#include <iostream>
using namespace std;

int main() {

	int t,n,k;
	 cin >> t;
	while(t--)
	{   
	    cin >> n>>k;
	    int num,count=0;
	    for (int i = 0; i < n; i++) {
	       
	   cin >>num;
	    if((num+k)%7==0)  count++;
	    }
	    
	
	cout << count <<endl;
	}
	
	return 0;
}