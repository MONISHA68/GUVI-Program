#include <stdio.h>
int main() 
{
    int a[5],i,n,max=0,min=999;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=max)
            {
                max=a[i];
            }
    }
    printf("%d\n",max);
    for(i=0;i<n;i++)
    {
        if(a[i]<=min)
            {
                min=a[i];
            }
    }
    printf("%d",min);
	return 0;
}
