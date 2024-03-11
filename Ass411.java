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

        ArrayX aobj = new ArrayX(iLength1,iLength2);
        aobj.Accept1();
        aobj.Display1();
        aobj.Accept2();
        aobj.Display2();
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