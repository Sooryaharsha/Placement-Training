import java.util.*;

public class rotate
{
	public static void main(String[] args)
	{
		int a[]={1,2,3,4,5};
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the k value : ");
		int k=  input.nextInt();
		int p=0;
		while(p<a.length)
		{
			System.out.print(a[k]+" ");
			k=(k+1)%a.length;
			p++;
		}
		System.out.println();
		rightrotate(a,k);
	}
	static void rightrotate(int a[],int k)
	{
		int q=0;
		int c =0;
		while(q<a.length)
		{
			if(k>0)
			{
			System.out.print(a[a.length-k]+" ");
			k--;
			}
			else
			{
				System.out.print(a[c]+" ");
				c++;
			}
			q++;
		}
	}
}

		