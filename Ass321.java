import java.util.*;

class Ass321
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of Elenment  of Array :");
        int iValue = sobj.nextInt();

        Numbers nobj = new Numbers(iValue);

        nobj.Accept();
        nobj.Display();

        int iRet = nobj.DiffEvenOddElement();
        System.out.println("Difference B/W Small And Capital Number is : "+iRet);
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

    public int DiffEvenOddElement()
    {
        int iESum = 0, iOSum = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] % 2 == 0)
            {
                iESum = iESum + Arr[i];
            }
            else
            {
                iOSum = iOSum + Arr[i];
            }
        }
        return iESum - iOSum;
    }
} 