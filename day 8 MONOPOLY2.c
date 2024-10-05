#include <stdio.h>

int main(void) {
	
	int i,t,p,q,r,s;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	    scanf("%d%d%d%d",&p,&q,&r,&s);
	    if(p > q+r+s || q > p+r+s || r > p+q+s || s > p+q+r || p-s > q+r)
	    {
	        printf("yes\n");
	    }
	    
	    else
	    printf("no\n");
	}
	return 0;
}
