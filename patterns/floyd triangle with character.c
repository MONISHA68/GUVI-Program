#include <stdio.h>
int main()
{
    int n,i,j,k=65;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=i;j++)
       {
           printf("%c ",(char)k);
       }
       k++;
       printf("\n");
    }
    return 0;
}
