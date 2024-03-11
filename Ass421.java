import java.util.*;

class Ass411
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Size of Arr Array :");
        int iLength1 = sobj.nextInt();

        System.out.println("Enter Size of Brr Array :");
        int iLength2 = sobj.nextInt();

        Numbers nobj = new Numbers(iLength1,iLength2);
        
        nobj.Accept1();
        nobj.Display1();
        nobj.Accept2();
        nobj.Display2();

        int iRet = nobj.SummationDiff();
        System.out.println("Difference B/W Summation of Elemnt in Arr and Brr is : "+iRet);
    }
}

class ArrayX
{
    public int Arr[];
    public int Brr[];

    public ArrayX(int iSize1, int iSize2)
    {
        Arr = new int[iSize1];
        Brr = new int[iSize2];
    }

    public void Accept1()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the "+Arr.length+" Element in Arr Array");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Accept2()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the "+Brr.length+" Element in Brr Array");

        for(int iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            Brr[iCnt] = sobj.nextInt();
        }
    }
    
    public void Display1()
    {
        System.out.println("Element of Array Arr is :");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
    
    public void Display2()
    {
        System.out.println("Element of Array Brr is :");
        for(int iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.print(Brr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class Numbers extends ArrayX
{
    public Numbers(int L1, int L2)
    {
        super(L1,L2);
    }

    public int SummationDiff()
    {
        int iASum = 0, iBSum = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            iASum = iASum + Arr[i]; 
        }
        
        for(int i = 0; i < Brr.length; i++)
        {
            iBSum = iBSum + Brr[i]; 
        }

        return iASum - iBSum;
    }
}