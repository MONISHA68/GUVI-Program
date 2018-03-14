#include <stdio.h>
int main()
{
    int n,i,j,k;
   scanf("%d",&n);
   for(i=n;i>=1;i--)
   {
       for(j=1;j<=n;j++)
       {
           if(j<=i)
            printf("%d",j);
           else
            printf("*");
           
       }
       for(k=n;k>=1;k--)
       {
           if(k<=i)
            printf("%d",k);
           else
            printf("*");
       }
       printf("\n");
   }
	return 0;
}
