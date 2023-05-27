import java.util.*;

import javax.annotation.processing.SupportedOptions;

class Priscilla {

    Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        //pri1();
        //pri2();
        //pri3();
        //pri4();
        //pri5();
        //pri6();
        pri7();
    }

    static void pri1(){
        String equation = "5+8-2*7";
        int ans = equation.charAt(0)-48;
        for(int i=1; i<equation.length()-1;i+=2){
            switch(equation.charAt(i))
            {
                case '+':
                {
                    ans = ans + (equation.charAt(i+1)-48);
                    break;
                }

                case '-':
                {
                    ans = ans - (equation.charAt(i+1)-48);
                    break;
                }
                case '*':
                {
                    ans = ans * (equation.charAt(i+1)-48);
                    break;
                }
                case '%':
                {
                    ans = ans % (equation.charAt(i+1)-48);
                    break;
                }
                case '/':
                {
                    ans = ans / (equation.charAt(i+1)-48);
                    break;
                }

            }
        }
        System.out.println(ans);
    }
    static void pri2()
    {
        //a2b3
        String equation = "a12b12c1";
        int i=0;int num=0;char ch='a';
        while(i<equation.length())
        {
            if(isDigit(equation.charAt(i)))
            {
                while(i<equation.length() && isDigit(equation.charAt(i)) )
                {
                    num = num *10 + (equation.charAt(i)-48);
                    i++;
                }
                   
                while(num>0)
                {
                    System.out.print(ch);
                    num--;
                }
                    
                num = 0;
                //ch='';
            }
            else{
                ch = equation.charAt(i);
                i++;
            }
        }
    }

        

     static void pri3()
     {
        //a12b13
        String equation = "a11b11c11";
        int i=1,len= equation.length(),num;
        String sb = "";

        char ch = equation.charAt(0);
        while(i<len )
        {
            if(isDigit(equation.charAt(i)))
            {
                while(i<len && isDigit(equation.charAt(i)) )
                {
                    sb = sb+equation.charAt(i);
                    //System.out.println(sb);
                    i++;
                }
                num = Integer.parseInt(sb);
                sb="";
                while(num>0)
                {
                    System.out.print(ch);
                    num--;
                }
            }
            else
            {
                ch  = equation.charAt(i);
                i++;
            }

        }
     }

     static void pri4()
     {
        String equation = "50+40*2";
        String num = "";
        for(int i =0;i<equation.length();i++)
        {
            if(!isDigit(equation.charAt(i)))
            {
                num = num+equation.charAt(i);
                
            }
        }
     }

     static void pri5()
     {
        Scanner in = new Scanner(System.in);
		int row;
		row=in.nextInt();
		int t=0;
		int n=1;
		for(int i=0;i<row;i++) {
			for(int j=0;j<row-i-1;j++) {
				System.out.print(" ");
			}
			for(int k=0;k<row;k++) {
				t=t+n;
				System.out.print(t);			
			}
				
			t=t+row;
			n=n*-1;
		
			System.out.println();
			
	}
     }
     static void pri6()
     {
        //50+20-30
        String equation = "5+20-3";
        System.out.println("Started");
        int ans = findNum(equation);
        for(int i =0;i<equation.length();i++)
        {
            System.out.println("Inside for Loop");
            if(!isDigit(equation.charAt(i)))
            {
                switch(equation.charAt(i))
                {
                    case '+':
                    {
                        ans = ans + findNum(equation.substring(i+1,equation.length()));
                        break;
                    }
    
                    case '-':
                    {
                        ans = ans - findNum(equation.substring(i+1,equation.length()));
                        break;
                    }
                    case '*':
                    {
                        ans = ans * findNum(equation.substring(i+1,equation.length()));
                        break;
                    }
                    case '%':
                    {
                        ans = ans % findNum(equation.substring(i+1,equation.length()));
                        break;
                    }
                    case '/':
                    {
                        ans = ans / findNum(equation.substring(i+1,equation.length()));
                        break;
                    }
    
                }
                System.out.println(ans);
                }
            }
            System.out.println(ans);
        }

     static int findNum(String s)
     {
        System.out.println(s);
        String temp = "";
        int i=0;
        while(i<s.length() && isDigit(s.charAt(i)) )
        {
            temp += s.charAt(i);
            i++;
        }
        int num = Integer.parseInt(temp);
        return num;
     }
     static boolean isDigit(char ch)
        {
            return ch>= 48 && ch<= 57 ;
        }
    
    static void pri7()
    {
        int arr[]= new int[]{1,2,3,4,5};
        int k=2,sum=0,j;
        //int result[] = new int[10];
        int n=arr.length;
        int loopcount=0;

        for(int i=0;i<arr.length;i++){
            sum=0;
            j=i;
            loopcount=0;
            while(loopcount<k){
                sum+=arr[j];
                j=(j+1)%n;
                loopcount++;
            }
            System.out.print(sum+" ");
        }
    }

    
}


