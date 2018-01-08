#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,n,sum=0;
    scanf("%s",a);
    n=strlen(a);
	for(i=0;i<n;i++)
	{
	    sum=sum+(int)a[i];
	}
	printf("%d",sum);
	return 0;
}
