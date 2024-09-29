#include <stdio.h>

int main() 
{

	int t,n,x,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&n,&x);
        if(n%6==0)
        {
            printf("%d\n",(n/6)*x);
        }
        else
        {
            printf("%d\n",((n/6)+1)*x);
        }
    }
	return 0;
}




