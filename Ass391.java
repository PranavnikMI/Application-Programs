import java.util.*;

class Ass391
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String");
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

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr.length; j++)
            {
                if(i < Arr.length - 1)
                {
                    if(j <= i)
                    {
                        System.out.print(Arr[j]+"\t");
                    }
                    else
                    {
                        System.out.print("*\t");
                    }
                }
                else
                {
                    System.out.print("");
                }
            }
            System.out.println();
        }
    }
}