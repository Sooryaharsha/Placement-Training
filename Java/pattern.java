import java.net.SocketTimeoutException;
import java.util.*;

public class pattern
{
    static int i,j,n,totcol,s,totspace,k;
    static char ch;
    public static void main(String[] args)
    {
        //p1();
        //p2();
        //p3();
        //p4();
        //p5();
        p6();
    }

    static void p1()
    {
        
        Scanner input = new Scanner (System.in);
        n= 6;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    static void p2()
    {
        n=5;
        
        for(i=0;i<n;i++)
        {
            ch = 70;
            for(s=i;s<n;s++)
            {
                System.out.print(" ");
            }
            for(j=0;j<=i;j++)
            {
                ch--;
                System.out.print(ch+" ");
            }
            System.out.println();
        }

    }
    static void p3()
    {
        n=5;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                int toPrint = j<=n-i ? 1 : i;
                System.out.print(toPrint+" ");
            }
            System.out.println();
        }
    }

    static void p4()
    {
        n=5;
        
        for(i=0;i<n;i++)
        {
            ch = 'A';

            for(j=0;j<n;j++)
            {
               int toPrint = j<n-i-1 ? ch : ch+i;
                System.out.print((char)toPrint+" ");
            }
            System.out.println();
        }
    }
    static void p5()
    {
        n=5;
        for(i=1;i<2*n;i++)
        {
            totspace = i<=n ? n-i : i-n;
            totcol = i<=n ? 2*i-1 : 2*(2*n-i)-1;
            
            for(s=0;s<totspace;s++)
            {
                System.out.print(" ");
            }
            for(j=1;j<=totcol;j++)
            {
                System.out.print("*");
            }
            System.out.println();

        }
    }
    static void p6()
    {
        ch = 65;
        n= 5;
        for(i=1;i<2*n;i++)
        {
            totcol = i<=n ? n-i+1 : i-n+1;
            int toPrint = ch + totcol;
            for(j=1;j<=totcol;j++)
            {
                --toPrint;
                System.out.print((char)toPrint+" ");
            }
            System.out.println();
        }
    }
}