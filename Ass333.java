import java.util.*;

class Ass333
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number :");
        int iValue = sobj.nextInt();

        Digit dobj = new Digit();

        int iRet = dobj.BtwThreeSevenDigitFreq(iValue);
        System.out.println("Freq of Digit B/W three and Seven is : "+iRet);
    }
}

class Digit
{
    public int BtwThreeSevenDigitFreq(int iNo)
    {
        int iDigit = 0, iCnt = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit > 3 && iDigit < 7)
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }
}