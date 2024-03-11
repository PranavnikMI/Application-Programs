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
        obj.ConcatString(str1,str2,iValue);
    }
}

class StringX
{
    public void ConcatString(String s1, String s2, int No)
    {
        char Arr[] = new char[s1.length()];
        char Brr[] = new char[s2.length()];
        Arr = s1.toCharArray();
        Brr = s2.toCharArray();
        char Crr[] = new char[s1.length() + No + 1];

        for(int i = 0; i < Crr.length; i++)
        {
            if(i < Arr.length)
            {
                Crr[i] = Arr[i];
            }
            else if(i == Arr.length)
            {
                Crr[i] = ' ';
            }
            else 
            {
                Crr[i] = Brr[i - (Arr.length + 1)];
            }
        }
        
        for(int j = 0; j < Crr.length; j++)
        {
            System.out.print(Crr[j]);
        }
    }
}