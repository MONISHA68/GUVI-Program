#include <stdio.h>
int main()
{
    int n,i,j,k,m=0,temp=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m=temp;
        for(j=1;j<=i;j++)
        {
            m++;
            printf("%d",m);
        }
        temp=m;
        for(k=i-1;k>=1;k--)
        {
            m--;
            printf("%d",m);
        }
        printf("\n");
    }
	return 0;
}
