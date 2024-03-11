import java.util.*;

class Ass35
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        StringX obj = new StringX();
        obj.ReverseToggleString(str);
    }
}

class StringX
{
    public void ReverseToggleString(String s)
    {
        char Arr[] = new char[s.length()];
        Arr = s.toCharArray();
        char ch = '\0';

        for(int i = 0; i < Arr.length / 2; i++)
        {
            
            ch = Arr[i];
            Arr[i] = Arr[Arr.length - (i + 1)];
            Arr[Arr.length - (i + 1)] = ch;
        }

        for(int j = 0; j < Arr.length; j++)
        {
            if(Arr[j] >= 'A' && Arr[j] <= 'Z')
            {
                System.out.printf("%c",Arr[j] + 32);
            }
            else
            {
                System.out.printf("%c",Arr[j] - 32);
            }    
        }
    }
}