import java.util.*;

class Ass343
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Element of Array : ");
        int iLength = sobj.nextInt();

        System.out.println("Enter the Number : ");
        int iValue = sobj.nextInt();

        Numbers nobj = new Numbers(iLength,iValue);

        nobj.Accept();
        nobj.Display();

        int iRet =  nobj.CheckLastOccurance();
        System.out.println("Last Occcurance index is : "+iRet);
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
        System.out.println("Enter the "+Arr.length+" Element :");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt(); 
        }
    }

    public void Display()
    {
        System.out.println("Element in Array is : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class Numbers extends ArrayX
{
    public int iNo ;

    public Numbers(int iSize, int iValue)
    {
        super(iSize);
        iNo = iValue;
    }

    public int CheckLastOccurance()
    {
        int iCnt = 0, iAns = 0;
        boolean Flag = false;
        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == iNo)
            {
                iAns = iCnt;
                Flag = true;
            }
            iCnt++;
        }
        if(Flag == false)
        {
            iAns = -1;
        }
        return iAns;
    }
}