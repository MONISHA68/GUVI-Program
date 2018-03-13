#include <stdio.h>
int main()
{
   int i,j,k,l,n;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       for(j=1;j<n-i;j++)
       {
           printf(" ");
       }
       for(k=i;k>=0;k--)
       {
           printf("%d",k);
       }
       for(l=1;l<=i;l++)
       {
           printf("%d",l);
       }
     printf("\n");
   }
    return 0;
}
