import java.util.*;

class Ass441
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the String :");
        String str = sobj.nextLine();

        ArrayClass aobj = new ArrayClass();
        aobj.ConvertCapital(str);
    }
}

class ArrayClass
{
    public void ConvertCapital(String s)
    {
        char Arr[] = new char[s.length()];
        Arr = s.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();

        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                Arr[i] = Character.toLowerCase(Arr[i]);
            }
            System.out.print(Arr[i]+"\t");
        }
    }
}