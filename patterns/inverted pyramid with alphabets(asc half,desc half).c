#include <stdio.h>
int main() 
{
    char var='A';
    int i,j,k,n,l;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
	    var='A';
	    for(j=1;j<=n-i;j++)
	    {
	        printf("  ");
	    }
	    for(k=1;k<=i;k++)
	    {
	        printf("%c ",var);
	        var++;
	    }
	    for(l=i;l>=1;l--)
	    {
	        printf("%c ",var-1);
	        var--;
	    }
	    printf("\n");
	}
	return 0;
}
