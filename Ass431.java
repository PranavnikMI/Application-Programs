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
        nobj.DisplayRevDigit();
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

    public int CountDigit(int iNo)
    {
        int iCnt = 0;
        while(iNo != 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }
        return iCnt;
    }

    public int SquareX(int iNo)
    {
        int iMult = 1;
        for(int i = 1;i < iNo; i++)
        {
            iMult = iMult*10;
        }
        return iMult;
    }

    public int RevNumberDigit(int iNo)
    {
        int iDigit = 0, iSum = 0, iAns = 0,iValue = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iValue = CountDigit(iNo);
            iAns = SquareX(iValue);
            iSum = iSum + iAns * iDigit;
            iNo = iNo/10;
        }
        return iSum;
    }

    public void DisplayRevDigit()
    {
        System.out.println("Rev Digit of Elements in Array is:");
        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(RevNumberDigit(Arr[i])+"\t");
        }
    }
}