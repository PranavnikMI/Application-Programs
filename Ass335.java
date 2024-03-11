import java.util.*;

class Ass335
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number :");
        int iValue = sobj.nextInt();

        Digit dobj = new Digit();

        int iRet = dobj.DiffSummationEvenOdd(iValue);
        System.out.println("Diifference B/W Summation of Even and odd Digit is : "+iRet);
    }
}

class Digit
{
    public int DiffSummationEvenOdd(int iNo)
    {
        int iDigit = 0, iESum = 0, iOSum = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                iESum = iESum + iDigit;
            }
            else
            {
                iOSum = iOSum + iDigit;
            }
            iNo = iNo / 10;
        }
        return iESum - iOSum;
    }
}