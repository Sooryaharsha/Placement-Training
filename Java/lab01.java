import java.util.*;
public class lab01{
    public static void main(String[] args){
       int arr[]=new int[5];
       int a,b,c,d;
	   
       Scanner input =  new Scanner(System.in);
       System.out.print("Enter value for a : ");
       a= input.nextInt();
       System.out.print("Enter value for b : ");
       b= input.nextInt();
       System.out.print("Enter value for c : ");
       c= input.nextInt();
       System.out.print("Enter value for d : ");
       d= input.nextInt();
	   System.out.print("Enter the array values : ");
	   for(int i =0;i<arr.length;i++)
	   {
		   arr[i]=input.nextInt();
	   }
	   for(int i=0;i<arr.length;i++)
	   {
				double result=0;
			   double x=arr[i];
			   result= (x%2!=0)? (b*Math.pow(x,3)/3)  + d*x : (a*Math.pow(x,4)/4)+ (c*Math.pow(x,2)/2);
			   System.out.println("The Resultant value for "+x+" is "+result);
		   
		   /*else
		   {
			    double x=arr[i];
			   b=0;
			   d=0;
			   result= (a*Math.pow(x,4)/4) + (b*Math.pow(x,3)/3) + (c*Math.pow(x,2)/2) + d*x;
			   System.out.println("The Resultant value for "+x+" is "+result);
		   }*/
			   
	   }
		   
    }

}