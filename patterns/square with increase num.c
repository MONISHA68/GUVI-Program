#include <stdio.h>
int main()
{
    int i,j,temp,n;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
	    temp=i;
	 for(j=n;j>=1;j--)
	 {
	     if(temp==n)
	     {
	        printf("%d ",temp); 
	     }
	     else
	     {
	         printf("%d ",temp);
	         temp++;
	     }
	 }
	 printf("\n");
	}
	return 0;
}
