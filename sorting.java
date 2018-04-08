package assessment.java;

import java.util.Scanner;

public class Sort {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=5,temp=0;
		int a[]=new int[n];
		for(int i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
			System.out.print(a[i]+" ");
		}
		sc.close();
	}

}
