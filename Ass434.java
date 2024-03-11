import java.util.*;
import java.io.*;

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

        int iRet = nobj.CapCount();
        System.out.println("Capital Charecter in Array is:"+iRet);

    }
}

class ArrayX
{
    public char Arr[];

    public ArrayX(int iSize)
    {
        Arr = new char[iSize];
    }

    public void Accept()
    {   
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);

        System.out.println("Enter "+Arr.length+" Element of Array");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = ;
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


    public int CapCount()
    {
        int iCnt =0;
        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}