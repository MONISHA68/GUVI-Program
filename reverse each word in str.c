#include <stdio.h>
#include<string.h>
int main() 
{
	char a[30],str[30];
	int i,n,count=0,j,k;
	scanf("%[^\t\n]s",a);
	n=strlen(a);
	i=0,j=0;
	if(n%2!=0)
	{
	for(i=0;i<n;i++)
	{
	    if(a[i]!=' ')
	    {
	        str[j]=a[i];
	        j++;
	        count++;
	    }
	    else
	    {
	        for(k=(count-1);k>=0;k--)
	        {
	            printf("%c",str[k]);
	        }
	        printf(" ");
	        j=0;
	        count=0;
	    }
	}
	for(i=(count-1);i>=0;i--)
	{
	    printf("%c",str[i]);
	}
	}
	else
	{
	   for(i=0;i<n;i++)
	    {
	    if(a[i]!=' ')
	    {
	        str[j]=a[i];
	        j++;
	        count++;
	    }
	    else
	    {
	        for(k=(count-1);k>=0;k--)
	        {
	            printf("%c",str[k]);
	        }
	        j=0;
	        count=0;
	    }
	    }
	    for(i=(count-1);i>=0;i--)
	    {
	        printf("%c",str[i]);
	    }
	}
	return 0;
}
