import java.util.*;

class Ass334
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number :");
        int iValue = sobj.nextInt();

        Digit dobj = new Digit();

        int iRet = dobj.MultDigit(iValue);
        System.out.println("Multipication of Digit is : "+iRet);
    }
}

class Digit
{
    public int MultDigit(int iNo)
    {
        int iDigit = 0, iMult = 1;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit == 0)
            {
                iDigit = 1;
            }
            iMult = iMult*iDigit;
            iNo = iNo / 10;
        }
        return iMult;
    }
}