package arrays.java;

import java.util.Scanner;

public class Indexarray {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int val[]=new int[n];
		int ind[]=new int[n];
		int arr[]=new int[n];
		int k=0;
		for(int i=0;i<n;i++)
		{
			val[i]=sc.nextInt();
		}
		for(int i=0;i<n;i++)
		{
			ind[i]=sc.nextInt();
		}
		for(int i=0,j=0;i<n && j<n;i++,j++)
		{
			k=ind[j];
			arr[k]=val[i];
		}
		for(int i=0;i<n;i++)
		{
			System.out.print(arr[i]+" ");
		}
		sc.close();
	}
}
