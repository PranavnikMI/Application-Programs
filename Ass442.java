import java.util.*;

class Ass442
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");
        String str = sobj.nextLine();

        ArrayClass aobj = new ArrayClass();
        int iRet = aobj.CountVowel(str);

        System.out.println("Vowels in Array is : "+iRet);
    }
}

class ArrayClass
{
    public int CountVowel(String s)
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
            if(Arr[i] == 'A' || Arr[i] == 'E' || Arr[i] == 'I' || Arr[i] == 'O' || Arr[i] == 'U' || Arr[i] == 'a' || Arr[i] == 'e' || Arr[i] == 'i' || Arr[i] == 'o' || Arr[i] == 'u')
            {
                iCnt++;
            }
        }
        return iCnt++;
    }
}