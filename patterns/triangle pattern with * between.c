#include <stdio.h>
int main()
{
    int n,i,j,p,q;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=i;j++)
       {
           if(j<i)
            printf("%d*",i);
           else
            printf("%d",i);
       }
        printf("\n");
    }
    for(p=n;p>=1;p--)
    {
        for(q=1;q<=p;q++)
        {
            if(q<p)
                printf("%d*",p);
            else
                printf("%d",p);
        }
        printf("\n");
    }
	return 0;
}
