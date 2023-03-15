import java.util.*;

public class fib
{
  public static void main(String[] args)
  {
	  int k,i,j;
	  int[] arr = new int[10];
	  Scanner input = new Scanner(System.in);
	  k= input.nextInt();
	  for(i=0;i<k ;i++)
	  {
		  arr[i]=i;
	  }
	  for(i=k;i<10;i++)
	  {
		  int sum=0;
		  for(j=i-k;j<i;j++)
		  {
			sum+=arr[j];
		  }
		  arr[i]=sum;
	  }
	  for (i=0;i<10;i++)
	  {
		  System.out.println(arr[i]);
	  }
  }
}