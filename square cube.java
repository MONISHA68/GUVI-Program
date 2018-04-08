package assessment.java;

import java.util.Scanner;

public class Squarecube {

	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int sq=n*n;
		String s1=String.valueOf(sq);
		int cube=sq*n;
		String s2=String.valueOf(cube);
		String res=s1.concat(s2);
		//System.out.print(res);
		int len=res.length();
		for(int i=len-1;i>=0;i--)
		{
			System.out.print(res.charAt(i));
		}
		sc.close();
	}

}
