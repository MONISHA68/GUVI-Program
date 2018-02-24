#include <stdio.h>
int main()
{
    int i,n,n1,sum=0,rem=0;
	scanf("%d",&n1);
	for(i=n1;i<=100;i++)
	{
	    n=i;
	    sum=0;
	    while(n!=0)
	    {
	        rem=n%10;
	        sum=sum+rem;
	        n=n/10;
	    }
	    if(sum==n1)
	    {
	        printf("%d\t",i);
	        break;
	    }
	}  
	return 0;
}
