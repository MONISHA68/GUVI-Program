#include <stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>i)
                printf(" ");
            else
                printf("%d",j);
        }
        for(k=n;k>=1;k--)
        {
            if(k>i)
                printf(" ");
            else
                printf("%d",k);
        }
        printf("\n");
    }
	return 0;
}
