package assessment.java;

import java.util.Scanner;

public class Firstrepeatedchar {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		char[] ch=s.toCharArray();
		int n=ch.length;
		int flag=0;
		int x=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(ch[i]==ch[j])
				{
					x=ch[i];
					flag=1;
					break;
				}
			}
			if(flag==1)
				break;
		}
		char c=(char)(x+65);
		System.out.print(c);
		sc.close();
	}

}
