#include <stdio.h>

int main() {
	//code
	long long int x,n,total,i;
	scanf("%lld",&x);
	while(x--)
	{
	    scanf("%lld %lld",&n,&total);
	    long long int money[n],stop[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%lld",&money[i]);
	        if(money[i]<=total && total!=0)
	        {
	            total = total-money[i];
	            stop[i]=1;
	        }
	        else
	        stop[i]=0;
	    }
	    for(i=0;i<n;i++)
	    printf("%lld",stop[i]);
	    printf("\n");
	}
	return 0;
}