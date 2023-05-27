import java.util.*;

public class sankar {
    public static void main(String[] args)
    {
        // SumOfString s= new SumOfString();
        // s.find_sum();
        //MoveZeros.move_zero();
        //Max.find();
        // ReverseString r = new ReverseString();
        // r.find();
        // Password p = new Password();
        // p.find();
        Secondlargest sl = new Secondlargest();
        sl.find();
    }
    
}

class SumOfString{

    int num=0,sum=0;
    String value;

    SumOfString()
    {
        value= "a10b20c33d";
    }
    
    void find_sum(){

        value.toCharArray();
        int i =0 ;
        while(i < value.length()){
            num = 0;
            if(value.charAt(i) >= '0' && value.charAt(i) <= '9')
            {
                while( i < value.length() && value.charAt(i) >= '0' && value.charAt(i) <= '9' ){
                    num = num*10+(value.charAt(i)-'0');
                    System.out.println("number : "+num);
                    i++;
                }   
                sum= sum +num;
            }
            else{
                System.out.println("It is a character "+value.charAt(i));
                i++;
            }
            
        }
        System.out.println("The sum of "+value+" is "+sum);
    }     
}

class MoveZeros{

    static void move_zero()
    {
        int []arr = new int[]{1,2,0,3,0,0,3,2,1,4,0,3};
        int i,j;
        i=0;
        j=arr.length-1;
        while(i<j) {
            System.out.println("Entered the main loop");
            while(arr[i]!=0)
            {
                System.out.println("Entered the i loop");
                i++;
            }
            while(arr[j]==0)
            {
                System.out.println("Entered the j loop");
                j--;
            }
            if(i<j)
            {
                System.out.println("Entered the swap loop");
                int temp=arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            i++;
            j--;

        }
        //for(int k=0;k<arr.length;k++){
            System.out.println(Arrays.toString(arr));
        //}
    }
}

class Max{

    static void find(){

        int [] arr = new int[]{1,7,6,2,4,5,4,1};
        ArrayList<Integer> v = new ArrayList<Integer>();
        ArrayList<Integer> result = new ArrayList<Integer>();

        int j,max;
        max=-1;
        j= arr.length-1;

        for(int i=j;i>=0;i--)
        {
            if(arr[i]>max){
                max  = arr[i];  
                v.add(max);
            }   
        }

        for(int i =v.size()-1;i>=0;i--)
        {
            result.add(v.get(i));
        }
        System.out.println(result);
        
    }
}

class ReverseString {

    void find(){
        String str = "So@o#ry+";
        char[] newStr= str.toCharArray();
        int j=str.length()-1;
        int i =0;
        while(i<j)
        {
            if(Character.isAlphabetic(str.charAt(i)) && Character.isAlphabetic(str.charAt(j)))
            {
                char c = newStr[i];
                newStr[i] = newStr[j];
                newStr[j] = c;
                j--;
                i++;
            }
            else if(!Character.isAlphabetic(str.charAt(i))){
                i++;
            }
            else{
                j--;
            }
        }
        //str.toString();
        System.out.println(newStr);
    }
}

class Password{
    void find(){
        int sum = 12;
        String password = "";
        for(int i =0 ; i<5;i++)
        {
            if(sum>=9)
            {
                password = password+"9";
                sum = sum - 9;
            }
            else if(sum==0){
                password = password+'0';
            }
            else{
                password = password+Integer.toString(sum);
                sum=0;
            }
        }
        System.out.println(password);
        
    }
}

class Secondlargest{

    void find(){
        int []arr = new int[]{3,432,21,4500,2,1};
        int first = arr[0];
        int second = arr[0];
        Vector <Integer> v = new Vector<Integer>();

        for(int i=0;i<arr.length;i++){
            if(arr[i]>first){
                second = first;
                first =arr[i];
                
            }
            else if(arr[i]>second){
                second =arr[i];
             }
            }
            System.out.println(first+" "+second);

            for(int i=0;i<arr.length;i++){

                if(arr[i]!=first && arr[i]!=second){
                    v.add(arr[i]);
                }
            }
            System.out.println(v);
        }
}