package assessment.java;

import java.util.Scanner;

public class Stringdigitsum {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		int sum=0;
		//char[] ch=s.toCharArray();
		int n=s.length();
		for(int i=0;i<n;i++)
		{
			char c=s.charAt(i);
			if(Character.isDigit(c))
			{
				int a=Integer.parseInt(String.valueOf(c));
				sum=sum+a;
			}
			else
			{
				continue;
			}
		}
		System.out.print(sum);
		sc.close();

	}

}
