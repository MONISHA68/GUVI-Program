#include <stdio.h>
int main() 
{
	int n,i,j,temp=0,count=0,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    count=0;
	    temp++;
	    for(j=1;j<=i;j++)
	    {
	        count++;
	        if(count==1)
	        {
	            printf("%d",temp);
	            k=temp;
	        }
	        else
	        {
	            k++;
	            printf("%d",k);
	        }
	    }
	    printf("\n");
	}
	return 0;
}
  ////////////////////////////////////////////////////////////////////
#include <stdio.h>
int main() 
{
    int n,i,j,k=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    for(j=1;j<=i+1;j++)
	    {
	        printf("%d",i+j);   
	    }
	    printf("\n");
	}
	return 0;
}
