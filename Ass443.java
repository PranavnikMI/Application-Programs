import java.util.*;

class Ass442
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");
        String str = sobj.nextLine();

        System.out.println("Enter the Charecter :");
        char ch = sobj.next().charAt(0);

        ArrayClass aobj = new ArrayClass();
        int iRet = aobj.CheakOccurance(str,ch);

        System.out.println("Occurance is : "+iRet);
    }
}

class ArrayClass
{
    public int CheakOccurance(String s, char ch)
    {
        char Arr[] = new char[s.length()];
        Arr = s.toCharArray();

        System.out.println("Element in Array is :");
        for(int i =0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();

        int iCnt = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = Character.toUpperCase(Arr[i]);
            if(Arr[i] == Character.toUpperCase(ch))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}