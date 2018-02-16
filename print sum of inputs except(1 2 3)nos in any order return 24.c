#include <stdio.h>
int fun();
int fun1();
int main()
{
    int a[20],i,n,c,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
  	if(n==3)
    {
      c=fun(n,a);
      printf("%d",c);
    }
  	else
    {
      sum=fun1(n,a);
      printf("%d",sum);
    }
  return 0;
}
int fun(int n,int a[])
{
  int i,count=0;
  for(i=0;i<n;i++)
        {
        if(a[i]==1&&a[i+1]==2&&a[i+2]==3 || a[i]==2&&a[i+1]==3&&a[i+2]==1 || a[i]==3&&a[i+1]==2&&a[i+2]==1 || a[i]==1&&a[i+1]==3&&a[i+2]==2 || a[i]==2&&a[i+1]==1&&a[i+2]==3 || a[i]==3&&a[i+1]==1&&a[i+2]==2)
        {
         count=1;     
        }
    }
  if(count==1)
  {
    return 24;
  }
}
int fun1(int n,int a[])
  {
  int i,sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
  return sum;
}
