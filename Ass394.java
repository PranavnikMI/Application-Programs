import java.util.*;

class Ass384
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String :");
        String str = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.DisplayPattern(str);
    }
}

class Pattern
{
    public void DisplayPattern(String s)
    {
        char Arr[] = s.toCharArray();
        for(int i = 0; i < Arr.length * 2; i++)
        {
            for(int j = 0; j < Arr.length; j++)
            {
                if(i < Arr.length)
                {
                    if(j < Arr.length - i)
                    {
                        System.out.print(Arr[j]+"\t");
                    }
                    else
                    {
                        System.out.print("*\t");
                    }
                }
                else if(i == Arr.length)
                {
                    System.out.print("");
                }
                else
                {
                    if(j <= i - Arr.length)
                    {
                        System.out.print(Arr[j]+"\t");
                    }
                    else
                    {
                        System.out.print("*\t");
                    }
                    
                }
            }
            if(i != Arr.length)
            {
                System.out.println();
            }  
        }
    }
}