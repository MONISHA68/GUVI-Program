#include <stdio.h>
int main() 
{
    int i,j,k,m,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    m=1;
	    for(j=1;j<=n-i;j++)
	    {
	        printf(" ");
	    }
	    for(k=1;k<=i;k++)
	    {
	        printf("%d ",m);
	        m++;
	    }
	    printf("\n");
	}
	return 0;
}
