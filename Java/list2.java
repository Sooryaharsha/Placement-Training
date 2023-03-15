import java.util.*;

public class list2
{
	public static void main(String[] args)
	{
		ArrayList<Integer> hell =  new ArrayList<>();
		int n,i;
		Scanner input = new Scanner(System.in);
		n= input.nextInt();
		for(i=0;i<n;i++)
		{
			int k = input.nextInt();
			hell.add(k);
		}
		System.out.println("The Arraylist values are : "+hell);
		System.out.println("The second value is : "+hell.get(2));
		System.out.println("The traversal value is  : ");
		for(i=0;i<hell.size();i++)
		{
			System.out.println(hell.get(i));
		}
	}
}
