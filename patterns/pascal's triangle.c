#include <stdio.h>
int main()
{
    int i,j,k,n,n1,r,ick;
    scanf("%d ",&n1);
    for(i=0;i<n1;i++)
    {
        for(j=1;j<n1-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            if(i==0||k==0)
            {
                ick=1;
                printf("%d ",ick);
            }
            else
            {
                ick=ick*(i-k+1)/k;
                printf("%d ",ick);
            }
        }
        printf("\n");
    }
    return 0;
}
