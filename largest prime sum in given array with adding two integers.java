package assessment.java;

import java.util.Scanner;

public class Primesum 
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		int sum=0,flag=0,max=0;;
		for(int i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		for(int i=0;i<n;i++)
		{
			sum=0;
			for(int j=i+1;j<n;j++)
			{
				sum=a[i]+a[j];
				for(int k=2;k<=(sum/2);k++)
				{
					if(sum%k!=0)
					{
						flag=1;
					}
					else
					{
						flag=0;
						break;
					}
				}
				if(flag==1)
				{
					//System.out.print(sum+" ");
					if(max<sum)
					{
						max=sum;
					}
					sum=0;
				}
			}
		}
		System.out.println(max);
		sc.close();
	}

}
