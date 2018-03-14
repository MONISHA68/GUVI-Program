#include <stdio.h>
int main() 
{
    int i,j,k=1,n;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
	    for(j=i;j>=1;j--)
	    {
	        printf("%d",k);
	    }
	    printf("\n");
	    k++;
	}
	return 0;
}
