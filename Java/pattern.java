import java.util.*;

public class pattern
{
    public static void main(String[] args)
    {
        int i,j,n;
        Scanner input = new Scanner (System.in);
        n= input.nextInt();
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}