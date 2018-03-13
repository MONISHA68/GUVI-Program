#include <stdio.h>
int main()
{
    int i,j,k,m=1,n1;
    scanf("%d ",&n1);
    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=n1-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d ",m);
            m++;
        }
        printf("\n");
    }
    return 0;
}
