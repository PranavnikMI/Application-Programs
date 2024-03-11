// Take 2 Number and Display the Comman Factor of both Numbers
import java.util.*;

class Program254
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0, iNo2 = 0;

        System.out.println("Plese Enter First Number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Plese Enter Second Number : ");
        iNo2 = sobj.nextInt();

        Numbers nobj = new Numbers();

        nobj.CommonFactorsDisplay(iNo1,iNo2);
    }
}

class Numbers
{
    public void CommonFactorsDisplay(int iNo1, int iNo2)
    {
        int iCnt = 0;
        
        System.out.println("Comman Factor are : ");

        for(iCnt = 1; (iCnt <= iNo1/2) && (iCnt <= iNo2/2); iCnt++)
        {
            if((iNo1 % iCnt == 0) && (iNo2 % iCnt == 0))
            {
                System.out.println(iCnt);
            }
        }
    }
}
