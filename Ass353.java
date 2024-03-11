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

        System.out.println("Enter Concat Number :");
        int iValue = sobj.nextInt();

        StringX obj = new StringX();
        boolean bRet = obj.ConcatCheckString(str1,str2,iValue);
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
    public boolean ConcatCheckString(String s1, String s2, int No)
    {
        char Arr[] = new char[s1.length()];
        char Brr[] = new char[s2.length()];
        Arr = s1.toCharArray();
        Brr = s2.toCharArray();
        boolean Flag = true;

        for(int i = 0; i < No; i++)
        {
            if(Arr[i] != Brr[i])
            {
                Flag = false;
                break;
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