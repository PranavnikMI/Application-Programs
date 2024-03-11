import java.util.*;

class Ass331
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number :");
        int iValue = sobj.nextInt();

        Digit dobj = new Digit();

        int iRet = dobj.EvenDigitFreq(iValue);
        System.out.println("Freq of Even Digit is : "+iRet);
    }
}

class Digit
{
    public int EvenDigitFreq(int iNo)
    {
        int iDigit = 0, iCnt = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }
}