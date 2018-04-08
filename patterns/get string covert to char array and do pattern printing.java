package assessment.java;

import java.util.Scanner;

public class Patternnumber {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		char[] ch=s.toCharArray();
		int n=ch.length;
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				System.out.print(ch[j]);
			}
			System.out.println();
		}
		sc.close();
	}

}
