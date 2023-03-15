import java.util.*;

public class list3
{
	public static void main(String[] args)
	{
		Vector<Integer> vec =  new Vector<>();
		int n;
		Scanner input = new Scanner (System.in);
		n = input.nextInt();
		for (int i=0;i<n;i++)
		{
			int k= input.nextInt();
			vec.add(k);
		}
		System.out.println("The Vector contains "+vec);
		System.out.println("The Deleted value is "+vec.remove(2));
		System.out.println("The vector size is  "+vec.size());
		vec.clear();  //clear has better 
		System.out.println("Vector after clear : "+vec);
	}
}
