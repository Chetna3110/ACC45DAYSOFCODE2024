#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	int n,a=0,b=0;
	cin>>n;
	for(int i=0;i<n;i++){
	    string j;
	    cin>>j;
	    if(j=="START38") a++;
	    else b++;
	}
	cout<<a<<" "<<b<<endl;
	t--;
	}
	return 0;
}