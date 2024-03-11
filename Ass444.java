import java.util.*;

class Ass442
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");
        String str = sobj.nextLine();

        ArrayClass aobj = new ArrayClass();
        int iRet = aobj.DiffCase(str);

        System.out.println("Frequency b/w capital and small char is : "+iRet);
    }
}

class ArrayClass
{
    public int DiffCase(String s)
    {
        char Arr[] = new char[s.length()];
        Arr = s.toCharArray();

        System.out.println("Element in Array is :");
        for(int i =0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();

        int iCCnt = 0, iSCnt = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                iCCnt++;
            }
            else
            {
                iSCnt++;
            }
        }
        return iCCnt - iSCnt;
    }
}