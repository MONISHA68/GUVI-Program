#include <stdio.h>
#include<string.h>
int main() 
{
	char a[100];
	int n,i,j,p,t;
    scanf("%s",a);
    n=strlen(a);
    scanf("%d",&t);
    scanf("%d",&p);
    if(t==1)
    {
       for(i=(p-1);i<n;i=i+p) 
       {
           if(a[i]<=90)
           {
               a[i]=a[i]+32;
           }
       }
       printf("%s",a);
    }
    if(t==2)
    {
       for(i=(p-1);i<n;i=i+p) 
       {
           if(a[i]>=97)
           {
               a[i]=a[i]-32;
           }
       }
       printf("%s",a);
    }
	return 0;
}
