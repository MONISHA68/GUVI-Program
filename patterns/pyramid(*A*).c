#include <stdio.h>
int main()
{
    int row,i,j,k,count=0;
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        count=0;
        for(j=1;j<=row-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            count++;
            if(count%2==0)
            {
                printf("A");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
	return 0;
}
