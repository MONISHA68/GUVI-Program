package pattern.java;

import java.util.Scanner;

public class Bigpattern {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=n;i>=1;i--)
		{
			for(int j=n;j>=1;j--)
			{
				if(i==j)
				{
					System.out.print(i);
				}
				else if(i>j)
				{
					System.out.print(i);
				}
				else
				{
					System.out.print(j);
				}
			}
			for(int k=2;k<=n;k++)
			{
				if(i==k)
				{
					System.out.print(i);
				}
				else if(i>k)
				{
					System.out.print(i);
				}
				else
				{
					System.out.print(k);
				}
			} 
			System.out.println();
		}
		for(int i=2;i<=n;i++)
		{
			for(int j=n;j>=1;j--)
			{
				if(i==j)
				{
					System.out.print(i);
				}
				else if(i<j)
				{
					System.out.print(j);
				}
				else
				{
					System.out.print(i);
				}
			}
			for(int k=2;k<=n;k++)
			{
				if(i==k)
				{
					System.out.print(i);
				}
				else if(i<k)
				{
					System.out.print(k);
				}
				else
				{
					System.out.print(i);
				}
			}
			System.out.println();
		}
		sc.close();
	}
}
