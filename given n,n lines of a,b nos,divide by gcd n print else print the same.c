#include <stdio.h>
int main() 
{
    int n1,n2,n,gcd,flag=0,a[n],b[n],i,j;
	scanf("%d ",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
	    flag=0;
	    if(a[i]>b[i])
	    {
	        n1=a[i];
	        n2=b[i];
	        for(j=2;j<=n2;j++)
	        {
	            if(n1%j==0 && n2%j==0)
	            {
	                gcd=j;
	                flag=1;
	            }
	        }
	        if(flag==1)
	        {
	            printf("%d/%d\n",n1/gcd,n2/gcd);
	        }
	        else
	        {
	            printf("%d/%d\n",n1/2,n2/1);
	        }
	    }
	     else
	    {
	        n1=a[i];
	        n2=b[i];
	        for(j=2;j<=n2;j++)
	        {
	            if(n1%j==0 && n2%j==0)
	            {
	                gcd=j;
	                flag=1;
	            }
	        }
	        if(flag==1)
	        {
	            printf("%d/%d\n",n1/gcd,n2/gcd);
	        }
	        else
	        {
	            printf("%d/%d\n",n1/1,n2/1);
	        }
	    }
	}
	return 0;
}
