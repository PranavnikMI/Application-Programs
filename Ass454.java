import java.util.*;

class Ass452
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();

        System.out.println("Enter Charecter:");
        char chr = sobj.next().charAt(0);

        StringX obj = new StringX();
        obj.RemoveChar(str,chr);
    }
}

class StringX
{
    public void RemoveChar(String s, char ch)
    {
        char Arr[] = new char[s.length()];
        char Brr[] = new char[s.length()];
        Arr = s.toCharArray();
        int j = 0;

        for(int i = 0; i < Arr.length ; i++)
        {
            if(Arr[i] == ch)
            {
            
            }
            else
            {
                Brr[j] = Arr[i];
                j++;
            }  
        }

        for(int k = 0; k < j; k++)
        {
            System.out.print(Brr[k]);
        }    
    }
}
