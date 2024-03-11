import java.util.*;

class Ass35
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        StringX obj = new StringX();
        boolean bRet = obj.PalindromeString(str);
        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
    }
}

class StringX
{
    public boolean PalindromeString(String s)
    {
        s = s.toLowerCase();
        char Arr[] = new char[s.length()];
        Arr = s.toCharArray();
        boolean Flag = true;

        for(int i = 0; i < Arr.length/2 ; i++)
        {
            if(Arr[i] != Arr[Arr.length -( i +1)])
            {
                Flag = false;
            }
        }

        if(Flag == true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}