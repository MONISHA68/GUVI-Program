#include <stdio.h>
int main() {
    int a[10],n,i,j,b=0,x,k=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        b=0;
       if(a[i]='+')
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]='+';
                b=1;
           }
        }
        if(b==0)
        {

            count++;
            x=a[i];
            if(count==3)
            {
                printf("%d",x);
                break;
            }
        }
    }
    return 0;
}
