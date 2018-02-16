#include <stdio.h>
int main() 
{
    int i,count=0,sum=0,rem=0,n,temp=0;
    scanf("%d",&n);
	for(i=800;i<=n;i=i+(count*2))
	{
	    sum=0;
	    temp=i;
	    while(temp>0)
	    {
	        rem=temp%10;
	        sum=sum+rem;
	        temp=temp/10;
	    }
	    printf("%d ",sum);
	    count++;
	}
	return 0;
}
