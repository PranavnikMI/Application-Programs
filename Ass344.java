import java.util.*;

class Ass344
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Element of Array : ");
        int iLength = sobj.nextInt();

        System.out.println("Enter First Number : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter Second Number : ");
        int iValue2 = sobj.nextInt();

        Numbers nobj = new Numbers(iLength,iValue1,iValue2);

        nobj.Accept();
        nobj.Display();

        nobj.DisplayRange();
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
    public int iNo1;
    public int iNo2;

    public Numbers(int iSize, int iValue1, int iValue2)
    {
        super(iSize);
        iNo1 = iValue1;
        iNo2 = iValue2;
    }

    public void DisplayRange()
    {
        System.out.println("Number in Renge "+iNo1+" and "+iNo2+" is : ");
        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] > iNo1 && Arr[i] < iNo2)
            {
                System.out.println(Arr[i]+"\t");
            }
        }
        
    }
}