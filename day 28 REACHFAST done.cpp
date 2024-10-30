#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int diff=abs(x-y);
        int rem=diff%z;
        int ans=diff/z;
        if(rem!=0)
        cout<<ans+1<<endl;
        else
        cout<<ans<<endl;
    }

	return 0;
}