#include <stdio.h>
int main()
{
   int i,j,k,l,m,n,p;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n-i;j++)
       {
           printf(" ");
       }
       for(k=1;k<=i;k++)
       {
           printf("*");
       }
     printf("\n");
   }
   for(m=n-1;m>=1;m--)
   {
       for(p=1;p<=n-m;p++)
       {
           printf(" ");
       }
       for(l=1;l<=m;l++)
       {
           printf("*");
       }
       printf("\n");
   }
    return 0;
}
