package assessment.java;

import java.util.Scanner;

public class Upperlower {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		int n=s.length();
		int upper=0,lower=0;
		char[] ch=s.toCharArray();
		for(int i=0;i<n;i++)
		{
			if(ch[i]>='a' && ch[i]<='z')
			{
				lower++;
			}
			else if(ch[i]>='A' && ch[i]<='Z')
			{
				upper++;
			}
			else
			{
				continue;
			}
		}
		System.out.print(upper+" "+lower);
		sc.close();

	}

}
