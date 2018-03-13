#include <stdio.h>
int main()
{
   int i,j,k,n;
   scanf("%d",&n);
   for(i=n;i>=1;i--)
   {
      for(j=1;j<=n-i;j++)
      {
          printf(" ");
      }
      for(k=i;k>=1;k--)
      {
          printf("*");
      }
      printf("\n");
   }
    return 0;
}
