#include <stdio.h>
int main() 
{
	int n,i,j,l=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=i;j++)
       {
           printf("%d ",l);
           l++;
       }
       printf("\n");
    }
	return 0;
}
