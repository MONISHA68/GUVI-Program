import java.util.Scanner;

public class Booleanarray {

	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		int a[][]=new int[4][4];
		int count=0,max=0,x=0;
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				a[i][j]=sc.nextInt();
			}
		}
		for(int i=0;i<4;i++)
		{
			count=0;
			for(int j=0;j<4;j++)
			{
				if(a[i][j]==1)
				{
					count++;
				}
			}
			if(max<count)
			{
				max=count;
				x=i;
			}
		}
		System.out.print(x);
		sc.close();
	}

}
