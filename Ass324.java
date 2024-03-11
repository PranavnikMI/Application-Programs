import java.util.*;

class Ass324
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of Elenment  of Array :");
        int iValue = sobj.nextInt();

        Numbers nobj = new Numbers(iValue);

        nobj.Accept();
        nobj.Display();

        nobj.DisplayDividibleByThreeAndFive();
    }
}

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter the "+Arr.length+" Element in Array :");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Element in Array is :");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class Numbers extends ArrayX
{
    public Numbers(int iSize)
    {
        super(iSize);
    }

    public void DisplayDividibleByThreeAndFive()
    {
        System.out.println("Element Divisible by Five and Three is : ");
        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] % 5 == 0 && Arr[i] % 3 == 0)
            {
                System.out.println(Arr[i]);
            }
        }
    }
} 