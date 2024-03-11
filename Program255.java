// Take Number and return the Multipication of Factor
import java.util.*;

class Program255
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0, iRet = 0;

        System.out.println("Plese Enter Number : ");
        iNo = sobj.nextInt();

        Numbers nobj = new Numbers();

        iRet = nobj.FactorsMultipication(iNo);
        System.out.println("Multipication of Fators of "+iNo+" is : "+iRet);
    }
}

class Numbers
{
    public int FactorsMultipication(int iNo)
    {
        int iCnt = 0;
        int iMult = 1;
        
        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iMult = iMult * iCnt; 
            }
        }
        return iMult;
    }
}
