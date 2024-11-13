#include <bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i=0;i<n;i++)
#define loop1(i,n) for(int i=1;i<=n;i++)
using namespace std;

int main() {
	ll T;
	cin>>T;
	while(T--) {
	    int a,b,c,d;
	    cin>>a>>b>>c;
	   d= min({a, b, c});
	  int sum=a+b+c;
	   cout<<sum-d<<endl;
	    
	}
	return 0;
}