#include <stdio.h>
int main()
{
    int n,i,j,k,m,count=0,temp=10;
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
                printf("%d ",temp);
                m=temp;
            }
            else
            {
                m++;
                printf("%d ",m);   
            }
        }
        printf("\n");
    }
	return 0;
}
    /////////////////////////////////////////////////////////////////////////
    
#include <stdio.h>
int main() 
{
    int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=i;j++)
	    {
	        printf("%d ",9+i+j);
	    }
	    printf("\n");
	}
	return 0;
}



