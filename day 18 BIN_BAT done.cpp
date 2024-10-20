#include <iostream>
using namespace std;

int findpower(int no)
{
    int value=0;
    while (no%2==0)
    {   
        value=value+1;
        no=no/2;
    }
    return value;
}

int main() {
	int T,N,A,B,temp,timee;
	cin>>T;
	for (int i=0;i<T;i++)
	{
	    timee=0;
	    cin>>N>>A>>B;
	    N=findpower (N);
	    temp = N-1;
	    timee=A;
	    for (int j=0;j<temp;j++)
	    {
	        timee=timee+B;
	        timee=timee+A;
	    }
	    cout<<timee<<endl;
	    
	}
	return 0;
}