import java.util.*;

class Braces
{
    public static void main(String[] args) {

        iterat();
        
        String s = "soorya harsha";
        StringBuilder sb = new StringBuilder(" ");
        HashMap<Character,Integer> hm = new HashMap<Character,Integer>();
        //Iterator h = s.Iterator(); 

        char [] ch = s.toCharArray();

        for(int i=ch.length-1; i>=0;i--)
        {
            if(ch[i]!=' ')
            {
                if(hm.containsKey(ch[i]))
                {
                    hm.put(ch[i],hm.get(ch[i])+1);
                }
                else
                {
                    hm.put(ch[i],1);
                    sb.append(ch[i]);
                }
            }
           
            
        }
        System.out.println(sb.toString());

        for(Map.Entry m : hm.entrySet())
        {
            System.out.println(m.getKey()+" "+m.getValue());
        }

      
        
    }

    static void  iterat()
    {
        ArrayList<Integer> al = new ArrayList<Integer>(5);
        al.add(1);
        al.add(2);
        Iterator itr = al.iterator();
        Scanner input = new Scanner(System.in);

        while(itr.hasNext())
        {
            // System.out.println("hi");
            // int a =  input.nextInt();
            //int k = ;
            System.out.println(itr.next()+" ");
        }

        while(itr.hasNext())
        {
            System.out.println("hi");
            int a =  input.nextInt();
            System.out.println(al.add(a)+" ");
        }

        System.out.println(al);

        // for (itr.hasNext())
        // {
        //     System.out.println()
        // }
    }
}