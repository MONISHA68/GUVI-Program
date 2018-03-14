#include <stdio.h>
int main()
{
    int i,j,count=0,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    count=0;
	    for(j=1;j<=i;j++)
	    {
	        count++;
	        printf("%d",count%2);
	    }
	     printf("\n");
	}
	return 0;
}
