import java.util.*;

class Ass431
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Size of Array :");
        int iLength = sobj.nextInt();

        Numbers nobj = new Numbers(iLength);
        nobj.Accept();
        nobj.Display();
        nobj.DisplaySummationDigit();
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
    {   Scanner sobj = new Scanner(System.in);
        System.out.println("Enter "+Arr.length+" Element of Array");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
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
    public Numbers(int iLength)
    {
        super(iLength);
    }

    public int SummationDigit(int iNo)
    {
        int iDigit = 0, iSum = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo/10;
        }
        return iSum;
    }

    public void DisplaySummationDigit()
    {
        System.out.println("Summation of Digit of Elements in Array is:");
        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(SummationDigit(Arr[i])+"\t");
        }
    }
}