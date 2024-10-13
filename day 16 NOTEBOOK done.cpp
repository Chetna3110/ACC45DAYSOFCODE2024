#include <iostream>
using namespace std;

int main() {
	int t,i;
	cin >> t;
	int x[t];
	
	for(i=0;i<t;i++)
	{
	    cin >> x[i];
	}
	
	for(i=0;i<t;i++)
	{
	    cout << x[i]*10 << endl;
	}
	return 0;
}