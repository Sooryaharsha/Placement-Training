import java.util.*;
public class zoho
{
  public static void main(String[] args)
  {
	  int i,j,s;
	  Scanner input = new Scanner(System.in);
	  int n = input.nextInt();
	  for ( i=0;i<=2*n;i++)
	  {
		  for(j=0;j<=2*n;j++)
		  {
			  int k= n-Math.min(Math.min(i,j),Math.min(2*n-i,2*n-j));
			  System.out.print(k);
		  }
		  System.out.println();
	  }
	  System.out.println();
	  int pr=0;
	  for(i=0;i<n;i++)
	  {
		  for(s=i;s<=n;s++)
		  {
			  System.out.print(" ");
		  }
		  for(j=0;j<=i;j++)
		  {
			  if(j==0 || j ==i)
				  pr=1;
			  else
				  pr=(pr*(i-j+1))/j;
			  System.out.print(pr+" ");
		  }
		  System.out.println();
	  }
  }
}
