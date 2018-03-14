#include <stdio.h>
int main()
{
    int n,i,j,k,l,m;
   scanf("%d",&n);
   for(i=n;i>=1;i--)
   {
       for(j=1;j<=i;j++)
       {
           printf("%d",j);
       }
       if(i!=n)
       {
       for(k=i+1;k<=n;k++)
       {
           printf("*");
       }
       for(l=n;l>i;l--)
       {
           printf("*");
       }
       }
       for(m=i;m>=1;m--)
       {
           printf("%d",m);
       }
       printf("\n");
   }
	return 0;
}
