package assessment.java;

import java.util.Scanner;

public class Reversestring {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		int n=s.length();
		for(int i=n-1;i>=0;i--)
		{
			System.out.print(s.charAt(i));
		}
		sc.close();
	}
}
