import java.util.*;

class Ass345
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Element of Array : ");
        int iLength = sobj.nextInt();

        Numbers nobj = new Numbers(iLength);

        nobj.Accept();
        nobj.Display();

        int iRet =  nobj.OddProduct();
        System.out.println("Product of Odd Number is : "+iRet);
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
    public Numbers(int iSize)
    {
        super(iSize);
    }

    public int OddProduct()
    {
        int iMult = 1, i = 0;
        boolean bRet = false;

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] % 2 != 0)
            {
                iMult = iMult*Arr[i];
                bRet = true;
            }
        }
        if(bRet == false)
        {
            iMult = 0;
        }
        return iMult;
    }
}