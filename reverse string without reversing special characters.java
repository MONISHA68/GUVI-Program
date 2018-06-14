package javastrings.java;

import java.util.Scanner;

public class Reversewordswithoutspecialcharactersaffecting {

	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		char[] ch=s.toCharArray();
		int n=ch.length;
		/*char[] temp=new char[n];
		int k=0;
		for(int i=0;i<n;i++)
		{
			if(ch[i]>='a' && ch[i]<='z')
			{
				temp[k++]=ch[i];
			}
		}
		int i=0,j=0;
		int x=k-1;
		for(i=0,j=x;i<n;i++)
		{
			if((ch[i]>='a' && ch[i]<='z' )&& (temp[j]>='a' && temp[j]<='z'))
			{
				System.out.print(temp[j]);
				x--;
				j=x;
			}
			else
			{
				System.out.print(ch[i]);
				j=x;
			}
		}  */
		int l=0,r=n-1;
		char temp=' ';
		while(l<r)
		{
			if (!Character.isAlphabetic(ch[l]))
			{
				l++;
			}
			else if (!Character.isAlphabetic(ch[r]))
			{
				r--;
			}
			else
			{
				temp=ch[l];
				ch[l]=ch[r];
				ch[r]=temp;
				l++;
				r--;
			}
		}
		//String str=new String(ch);
		String str=String.valueOf(ch);
		System.out.print(str);
		sc.close();
	}
}
