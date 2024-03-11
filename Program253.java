// Given the Number and Display the EvenFactor
import java.util.*;

class Program253
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;

        System.out.println("Plese enter Number : ");
        iNo = sobj.nextInt();

        Numbers nobj = new Numbers();

        nobj.EvenFactorDisplay(iNo);
    }
}

class Numbers
{
    public void EvenFactorDisplay(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= (iNo/2); iCnt+=2) //iCnt = iCnt + 2
        {
            if(((iNo % iCnt) == 0))
            {
                System.out.println("Even factor is : "+iCnt);
            }
        }
    }
}
