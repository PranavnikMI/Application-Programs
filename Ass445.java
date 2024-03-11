import java.util.*;

class Ass445
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Size of Array :");
        int iValue = sobj.nextInt();

        int Arr[] = new int[iValue];

        System.out.println("Enter the element of Array :");
        for(int iCnt = 0; iCnt <Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        Pattern pobj = new Pattern();
        pobj.DisplayPattern(Arr);
    }
}

class Pattern
{
    public void DisplayPattern(int Arr[])
    {
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i]; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}