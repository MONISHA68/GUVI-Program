#include<stdio.h>
void main()
{
	int n,i,j,flag=1;
	scanf("%d",&n);
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if((i+j)==n)
			{
				printf("%d%d",i,j);
				flag=0;
				break;
			}
		}
		if(flag==0)
			break;
	}
}
