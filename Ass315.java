import java.util.*;

class Ass315
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        StringX xobj = new StringX();

        xobj.DisplayRevString(str);
        
    }
}

class StringX
{
    public void DisplayRevString(String s)
    {
        int i = 0;
        
        for(i = s.length() - 1; i >= 0; i--)
        {
            System.out.print(s.charAt(i));
        }    
    }
}