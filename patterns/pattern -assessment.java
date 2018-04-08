package assessment.java;

import java.util.Scanner;

public class Pattern {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=n;i>0;i--)
		{
			int k=i;
			for(int j=0;j<n;j++)
			{
				if(k<n)
				{
					System.out.print(k);
					k++;
				}
				else
				{
					System.out.print(k);
				}
			}
			System.out.println();
		}
		sc.close();
	}

}
