import java.util.*;

class Ass35
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First String :");
        String str1 = sobj.nextLine();

        System.out.println("Enter Second String :");
        String str2 = sobj.nextLine();

        StringX obj = new StringX();
        boolean bRet = obj.CheckString(str1,str2);
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
    public boolean CheckString(String s1, String s2)
    {
        char Arr[] = new char[s1.length()];
        char Brr[] = new char[s2.length()];
        Arr = s1.toCharArray();
        Brr = s2.toCharArray();
        boolean Flag = false;
        int i = 0;
    
        if(Arr.length != Brr.length)
        {
            return Flag;
        }

        while(Arr[i] == Brr[i])
        {
            i++;
            if(i == Arr.length)
            {
                break;
            }
        }

        if(i == Arr.length)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}