import java.util.*;

public class list
{
	public static void main(String[] args)
	{
		Stack<Integer> stk = new Stack<>();
		stk.push(1);
		stk.push(2);
		stk.push(3);
		System.out.println("The Stack values are : "+stk);
		int pk = stk.peek();
		int deleted =  stk.pop();
		
		System.out.println("The top value is : "+pk);
		System.out.println("The poped value is : "+deleted);
	}
}